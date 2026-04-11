#ifndef SIGNAL_HUNTER_H
#define SIGNAL_HUNTER_H

#include <Arduino.h>
#include <WiFi.h>

// Cyber-Gold Aesthetic Module: Signal Hunter (Visual Radar)
// Real-time RSSI tracking with Geiger Beep

void signal_hunter_draw_radar(int rssi) {
    int w = DISP.width();
    int h = DISP.height();
    
    // Clear graph area
    DISP.fillRect(10, 40, w - 20, h - 80, TFT_BLACK);
    
    // Normalize RSSI (-100 to -30) to width
    int bar_w = map(rssi, -100, -30, 0, w - 40);
    if (bar_w < 0) bar_w = 0;
    if (bar_w > w - 40) bar_w = w - 40;
    
    // Draw Geiger Bar (Gold/Orange Gradient)
    DISP.fillRect(20, (h / 2) - 10, bar_w, 20, FGCOLOR);
    DISP.drawRect(20, (h / 2) - 10, w - 40, 20, ACCENT);
    
    // Text RSSI
    DISP.setCursor(20, (h / 2) + 20);
    DISP.setTextSize(MEDIUM_TEXT);
    DISP.setTextColor(FGCOLOR, TFT_BLACK);
    DISP.printf("RSSI: %d dBm", rssi);
    
    // Geiger Beep (Proportional to RSSI)
    #if defined(SPEAKER)
      int tone_freq = map(rssi, -100, -30, 400, 2000);
      M5.Speaker.tone(tone_freq, 20);
    #endif
}

void signal_hunter_process_results(String target_ssid) {
    int n = WiFi.scanComplete();
    if (n <= 0) return;
    
    for (int i = 0; i < n; i++) {
        if (WiFi.SSID(i) == target_ssid) {
            signal_hunter_draw_radar(WiFi.RSSI(i));
            break;
        }
    }
}

#endif
