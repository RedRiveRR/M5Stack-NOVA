<div align="center">

# 🌌 NOVA FIRMWARE
### *M5Stack Cihazlar İçin Gelişmiş Siber Güvenlik ve Dijital Araştırma Platformu*

[![Language](https://img.shields.io/badge/Dil-Türkçe-informational.svg)]()
[![Platform](https://img.shields.io/badge/Platform-M5Stack-orange.svg)]()
[![Status](https://img.shields.io/badge/Durum-Aktif-success.svg)]()

<img src="https://raw.githubusercontent.com/RedRiveRR/M5Stack-NOVA/main/NovaMatrix.png" width="300" alt="Nova Logo">

**Nova**, M5Stack donanımlarınızı taşınabilir bir siber güvenlik laboratuvarına dönüştüren, modern arayüzlü ve tam kapsamlı bir firmware projesidir.

---

[Özellikler](#-özellikler) • [Kurulum](#-kurulum) • [Kullanım](#-kullanım) • [Sorumluluk Reddi](#-sorumluluk-reddi)

</div>

---

## 🔥 Özellikler

### 🛡️ Savunma ve Analiz Araçları
*   **BadUSB Hunter:** Bağlanan USB cihazlarını gerçek zamanlı analiz eder. HID saldırı potansiyeli olan (Rubber Ducky, O.MG vb.) cihazları anında tespit ederek sizi uyarır.
*   **Deauth Hunter:** WiFi ağlarına yapılan deauthentication (bağlantı kesme) saldırılarını yakalar ve saldırı şiddetini sinyal gücüyle raporlar.
*   **PineAP Hunter:** Sahte WiFi noktalarını (Rogue AP) ve WiFi Pineapple gibi saldırı cihazlarını tespit ederek güvenliğinizi korur.
*   **BLE Hunter:** Bluetooth reklam spam saldırılarını izler ve şüpheli aktiviteyi grafiksel olarak gösterir.

### 🧪 Siber Araştırma ve Testler
*   **AppleJuice:** iOS cihazlar için özelleştirilmiş Bluetooth eşleşme sinyalleri göndererek güvenlik testleri yapmanıza olanak tanır.
*   **Modern WiFi Spam:** Windows (SwiftPair) ve Android cihazlar için bildirim spamı oluşturma ve yüzlerce eş zamanlı sahte ağ yayını.
*   **Nova Captive Portal:** Kimlik avı (phishing) senaryolarını test etmek için tamamen özelleştirilebilir bir karşılama sayfası sunar.
*   **TV-B-Gone:** Gelişmiş IR kütüphanesi ile neredeyse tüm monitör ve televizyonları kontrol etme yeteneği.

---

## 📦 Kurulum

### 🚀 M5Burner (Hızlı Kurulum)
En stabil deneyim için resmi **M5Burner** uygulamasını kullanmanızı öneririz:
1.  [M5Burner'ı İndirin](https://docs.m5stack.com/en/download).
2.  Cihazınızı (StickC Plus2, StampS3 vb.) seçin.
3.  Arama kısmına **"Nova"** yazın.
4.  **RedRiveRR** tarafından sunulan güncel binary'yi **Burn** diyerek yükleyin.

### 💻 PlatformIO (Geliştiriciler İçin)
Kodu özelleştirmek ve kendiniz derlemek isterseniz:
```bash
git clone https://github.com/RedRiveRR/M5Stack-NOVA.git
cd M5Stack-NOVA
pio run -t upload
```

---

## 🎮 Kullanım Konfigürasyonu

Nova, farklı M5Stack cihazları için optimize edilmiştir:
-   **StickC serisi:** Güç butonu (Home), Yan buton (Next), M5 butonu (Select).
-   **Cardputer:** Klavye üzerinden tam kontrol.

> [!IMPORTANT]
> **Arayüz Dili:** İlk açılışta dil İngilizce gelebilir. **Settings > Language** menüsünden **Turkce** seçeneğini seçerek tam yerelleştirmeyi aktif edebilirsiniz.

---

## 🏗️ Teknoloji Yığını
-   **Core:** ESP-IDF / Arduino
-   **Display:** M5Unified & M5GFX
-   **Networking:** ESP32 WiFi & BLE Stack
-   **Framework:** PlatformIO

---

## ⚖️ Sorumluluk Reddi (Disclaimer)
Bu yazılım sadece **eğitim, siber güvenlik araştırması ve etik test amaçlı** geliştirilmiştir. İzin alınmamış sistemler üzerinde kullanılması pek çok ülkede yasalara aykırıdır. Bu aracın kullanımından doğacak her türlü yasal ve fiziksel sonuçtan tamamen kullanıcı sorumludur. **Geliştirici hiçbir sorumluluk kabul etmez.**

---

<p align="center">
  Geliştiren: <b><a href="https://github.com/RedRiveRR">RedRiveRR</a></b>
</p>
