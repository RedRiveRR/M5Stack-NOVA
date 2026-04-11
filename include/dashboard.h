#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <WebServer.h>
#include <DNSServer.h>
#include <WiFi.h>

extern WebServer webServer;
extern DNSServer dnsServer;
extern int current_proc;
extern bool isSwitching;

// State shared with main.cpp
extern bool dashboard_authenticated;
extern int dashboard_pending_proc;
extern unsigned long dashboard_switch_trigger;
extern bool is_remote_session;

// BLE Flags
extern bool sourApple;
extern bool swiftPair;
extern bool androidPair;
extern bool maelstrom;

const byte DASHBOARD_DNS_PORT = 53;
IPAddress DASHBOARD_IP(172, 0, 0, 1);

// -- UI --
const char DASHBOARD_HTML[] PROGMEM = R"rawline(
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>NOVA DASHBOARD</title>
    <style>
        :root { --p: #00f2ff; --s: #ff0055; --bg: #050505; }
        body { background: var(--bg); color: #fff; font-family: sans-serif; margin: 0; display: flex; flex-direction: column; align-items: center; padding-bottom: 50px; }
        .header { width: 100%; padding: 15px; text-align: center; border-bottom: 1px solid var(--p); margin-bottom: 20px; }
        .grid { display: grid; grid-template-columns: 1fr 1fr; gap: 10px; width: 90%; max-width: 450px; }
        .btn { background: #111; border: 1px solid #333; padding: 20px 10px; text-align: center; border-radius: 4px; cursor: pointer; font-weight: bold; font-size: 11px; text-transform: uppercase; }
        .btn:active { background: var(--p); color: #000; }
        .btn.stop { background: #400; border-color: var(--s); color: #fff; grid-column: 1 / -1; margin-bottom: 10px; padding: 25px; }
        #overlay { display:none; position:fixed; top:0; left:0; width:100%; height:100%; background:rgba(0,0,0,0.95); z-index:1000; flex-direction:column; align-items:center; justify-content:center; text-align:center; padding: 20px; }
    </style>
</head>
<body>
    <div id="overlay">
        <h2 style="color:var(--s)">BAGLANTI KESILDI</h2>
        <p>Saldırı aktif. Cihaz WiFi görevini geçici olarak bıraktı.</p>
        <div class="btn" style="width:200px" onclick="location.reload()">RE-CONNECT</div>
    </div>
    <div class="header"><h1 style="color:var(--p);letter-spacing:5px">NOVA REMOTE</h1></div>
    <div class="grid">
        <div class="btn stop" onclick="act('/api/stop')">DURDUR / PANELE DON</div>
        <div class="btn" style="grid-column:1/-1;border-color:var(--p)" onclick="act('/api/cmd?id=9')">APPLE JUICE (AUTO)</div>
        <div class="btn" onclick="act('/api/cmd?id=11')">WiFi Spam</div>
        <div class="btn" onclick="act('/api/cmd?id=19')">Portal</div>
        <div class="btn" onclick="act('/api/cmd?id=17')">Maelstrom</div>
        <div class="btn" onclick="act('/api/cmd?id=1')">Main Menu</div>
    </div>
    <script>
        function act(u) {
            fetch(u).then(r=>r.text()).then(t=>{
                if(u.includes('id=11')||u.includes('id=19')) document.getElementById('overlay').style.display='flex';
                else location.reload();
            }).catch(e=>location.reload());
        }
    </script>
</body>
</html>
)rawline";

const char LOGIN_HTML[] PROGMEM = R"rawline(
<!DOCTYPE html>
<html>
<head><meta charset="UTF-8"><meta name="viewport" content="width=device-width, initial-scale=1.0"><style>body{background:#000;color:#00f2ff;font-family:sans-serif;display:flex;align-items:center;justify-content:center;height:100vh;margin:0;}input{background:#111;border:1px solid #00f2ff;color:#fff;padding:15px;margin:10px 0;width:100%;}button{background:#00f2ff;color:#000;border:none;padding:15px;width:100%;cursor:pointer;font-weight:bold;}</style></head>
<body><div style="border:1px solid #00f2ff;padding:30px;width:250px"><h3>NOVA LOGIN</h3><form method="GET" action="/login"><input name="u" placeholder="admin"><input name="p" type="password" placeholder="admin"><button>ENTER</button></form></div></body>
</html>
)rawline";

void handleRoot() {
  if (!dashboard_authenticated) webServer.send(200, "text/html", LOGIN_HTML);
  else webServer.send(200, "text/html", DASHBOARD_HTML);
}

void handleLogin() {
  Serial.println("HTTP: Login Request received");
  
  // Use a more permissive check - any non-empty input works for now!
  if ((webServer.hasArg("u") && webServer.arg("u").length() > 0) || 
      (webServer.hasArg("user") && webServer.arg("user").length() > 0)) {
    Serial.println("AUTH: OK (Permissive Mode)");
    dashboard_authenticated = true;
    // JavaScript redirect to bypass HTTP header issues
    webServer.send(200, "text/html", "<html><script>location.href='/';</script></html>");
  } else {
    Serial.println("AUTH: Denied (Empty)");
    webServer.send(200, "text/html", LOGIN_HTML);
  }
}

void setupDashboard() {
  Serial.println("Dashboard: Booting...");
  dashboard_authenticated = false;
  is_remote_session = true;

  webServer.stop();
  dnsServer.stop();
  WiFi.softAPdisconnect(true);
  WiFi.mode(WIFI_OFF);
  delay(200);
  
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(DASHBOARD_IP, DASHBOARD_IP, IPAddress(255, 255, 255, 0));
  WiFi.softAP("NOVA-DASH", "", 1);
  dnsServer.start(DASHBOARD_DNS_PORT, "*", DASHBOARD_IP);
  
  webServer.on("/", HTTP_GET, handleRoot);
  webServer.on("/login", HTTP_GET, handleLogin); // Allow GET for fallback
  webServer.on("/login", HTTP_POST, handleLogin);
  webServer.on("/api/stop", [](){ dashboard_pending_proc = 40; dashboard_switch_trigger = millis() + 200; webServer.send(200); });
  webServer.on("/api/cmd", [](){
      if (webServer.hasArg("id")) {
        int id = webServer.arg("id").toInt();
        if (id == 9) sourApple = true;
        dashboard_pending_proc = id;
        dashboard_switch_trigger = millis() + 400;
        webServer.send(200);
      }
  });

  webServer.onNotFound([]() {
    webServer.sendHeader("Location", "http://172.0.0.1/");
    webServer.send(303);
  });

  webServer.begin();
}

#endif
