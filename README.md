# 🌌 NOVA v1.1.1
### *M5Stack Donanımları İçin Gelişmiş Ofansif Güvenlik ve Sinyal Manipülasyon Platformu*

<div align="center">

[![Version](https://img.shields.io/badge/Sürüm-v1.1.1-gold.svg)]()
[![License](https://img.shields.io/badge/Lisans-GPL--3.0-blue.svg)]()
[![Build](https://img.shields.io/badge/Derleme-Başarılı-brightgreen.svg)]()
[![Platform](https://img.shields.io/badge/Platform-ESP32--S3-black.svg)]()
[![Language](https://img.shields.io/badge/Arayüz-Türkçe-red.svg)]()

<img src="logo.png" width="400" alt="NOVA Operational Logo">

**NOVA**, M5Stack cihazlarını taşınabilir bir ofansif güvenlik istasyonuna dönüştürür. Kablosuz ağlar, Bluetooth sinyalleri ve HID protokolleri üzerinde doğrudan müdahale ve manipülasyon yapmak için optimize edilmiştir.

[Modüller](#-operasyonel-modüller) • [iOS Warfare](#-ios-warfare-suite-v11) • [Android Warfare](#-android-warfare-suite-v11-beta) • [Teknik Detaylar](#-teknik-mimari) • [Kurulum](#-kurulum-ve-dağıtım) • [Changelog](#-changelog)

</div>

---

## 🚀 Operasyonel Modüller

NOVA, saha operasyonları ve sızma testleri için tasarlanmış güçlü saldırı ve spam vektörleri içerir:

### 📡 1. Kablosuz Ağ (WiFi) Operasyonları
*   **Beacon Spam:** Spektrum üzerinde saniyeler içinde yüzlerce sahte SSID (Ağ adı) oluşturarak ağ kirliliği ve stres testi yapar.
*   **Deauthentication:** Hedeflenen WiFi istemcilerinin veya tüm ağın bağlantısını koparmak için yönetim paketleri gönderir.
*   **Nova Captive Portal:** Sahte giriş sayfaları (Phishing) oluşturarak ağ üzerinden kullanıcı verilerini test etmek için HTTP/DNS yönlendirmesi sağlar.

### 📶 2. Bluetooth (BLE) Manipülasyonu
*   **AppleJuice (iOS Spam):** Apple cihazlar üzerinde eşleşme ve kontrol bildirimleri oluşturarak Apple BLE yığınını manipüle eder.
*   **Android/Windows Spam:** SwiftPair ve Google FastPair protokollerini kullanarak cihazlara sürekli bildirim ve eşleşme isteği gönderir.
*   **BLE Sniffer & Flooder:** 2.4GHz Bluetooth paketlerini yakalar ve spektrumu geçersiz paketlerle doldurur.

### 🍎 3. iOS Warfare Suite (v1.1)
> **v1.1.0'da yeni!** Modern iPhone'lar (iOS 17 — 26.x) için özel olarak geliştirilmiş DoS bildirim motoru.

*   **AirTag Phantom:** Apple Nearby Action protokolü üzerinden sürekli popup bildirimi yağdırır.
*   **HomeKit Siege:** HomePod/HomeKit eşleşme popup'ları oluşturarak hedef cihazı meşgul eder.
*   **SA Turbo:** SourApple Nearby Action flood — her 20ms'de yeni kimlikle popup tetikler.
*   **SA Mix:** 15 farklı Apple bildirim tipi arasında rastgele geçiş yaparak iOS filtrelemeyi bypass eder.

**Teknik Detaylar:**
- `addData()` tabanlı Manufacturer Specific AD yapısı (17-byte Nearby Action paketi)
- Her pakette `esp_fill_random()` ile rastgele authentication tag → iPhone her birini yeni cihaz sanır
- `delay(20)` stabilite garantisi ile crash-free sürekli yayın

### 🤖 4. Android Warfare Suite (v1.1 Beta)
> **v1.1.1'da yeni!** Google Fast Pair protokolünü kullanarak Android cihazlar için geliştirilmiş DoS motoru.

*   **Fast Pair Flood:** Google'ın yakın cihaz algılama protokolünü (0xFE2C) saniyede onlarca kez tetikler.
*   **Android Mix:** 250'den fazla farklı Android cihaz modelini (Pixel, Samsung, JBL vb.) sırayla taklit ederek filtreleri geçer.
*   **Samsung/Pixel Siege:** Belirli modellere (S23 Ultra, Pixel Buds vb.) odaklanmış özel spam paketleri gönderir.

**Teknik Detaylar:**
- Google LLC (0xFE2C) Service Data yapısı
- 3-byte random model ID desteği (Mix modunda)
- iOS versiyonuna benzer 20ms stabilite döngüsü

### ⌨️ 5. HID & USB (BadUSB)
*   **BadUSB Payloads:** Cihaza takılan sistemlerde önceden tanımlanmış komutları (Ducky Script benzeri) ışık hızında çalıştırarak otomatik konfigürasyon veya sızma testi yapar.
*   **HID Analysis:** Bağlı cihazların HID descriptor'larını kontrol eder.

### 📺 6. Kızılötesi (IR) Kontrol
*   **TV-B-Gone:** Geniş bir IR kütüphanesi kullanarak her türlü televizyon ve projektörü kapatma veya kontrol etme sinyali gönderir.

### 🛡️ 7. Savunma Modülleri
*   **Deauth Hunter:** Ortamdaki WiFi deauth saldırılarını algılar ve uyarı verir.
*   **BLE Hunter:** Çevredeki şüpheli BLE cihazlarını (Flipper Zero, AirTag tracker vb.) tespit eder.
*   **Pineapple Hunter:** Sahte erişim noktalarını (Evil Twin) tespit etmek için SSID analizi yapar.

---

## 🛠 Teknik Mimari

| Katman | Teknoloji |
| :--- | :--- |
| **İşlemci** | ESP32-S3 (M5StickC Plus2 / Cardputer / StampS3) |
| **Görsel** | M5Unified / M5GFX (Yüksek FPS Boot Animasyonu) |
| **Dil** | C++ / Arduino / PlatformIO |
| **Ağ** | WiFi 802.11 b/g/n & Bluetooth Low Energy (BLE) |
| **iOS Warfare** | Apple Nearby Action (0x0F) / Proximity Pairing (0x07) |
| **Android Warfare** | Google Fast Pair (0xFE2C) |

---

## 📦 Kurulum ve Dağıtım

### ⚡ M5Burner İle Yükleme
En pratik yükleme yöntemi:
1.  **M5Burner** uygulamasını indirin ve açın.
2.  Sol menüden cihazınızı seçin.
3.  Arama kutusuna **"Nova"** yazın.
4.  **RedRiveRR** tarafından yayınlanan güncel sürümü **Burn** diyerek cihazınıza atın.

### 💻 Geliştiriciler İçin (Derleme)
```bash
git clone https://github.com/RedRiveRR/M5Stack-NOVA.git
cd M5Stack-NOVA
pio run -t upload
```

---

## 📋 Changelog

### v1.1.1 — Android Warfare Suite Beta (2026-04-11)
- ✅ **Android Warfare Suite** eklendi: Fast Pair Flood, Android Mix, Samsung/Pixel Siege
- ✅ Google Fast Pair (0xFE2C) protokolü ile Android bildirim spam desteği
- ✅ 250+ Android modelini içeren veritabanı ile rotasyonel saldırı (Mix Mode)

### v1.1.0 — iOS Warfare DoS Engine (2026-04-11)
- ✅ **iOS Warfare Suite** eklendi: AirTag Phantom, HomeKit Siege, SA Turbo, SA Mix
- ✅ Apple Nearby Action (0x0F) protokolü ile iPhone popup flood
- ✅ Her pakette rastgele auth tag = iOS dedup bypass
- ✅ 15 farklı Apple action type rotasyonu (AppleTV, Vision Pro, HomePod, Apple ID vb.)
- ✅ `applejuice.h` payload'ları 31-byte BLE frame limitine uygun olarak yeniden hesaplandı
- ✅ BLE stack crash koruması (stabilize edilmiş stop→build→start akışı)
- 🔧 AirTag payloads'ı Find My (0x12) protokolüne güncellendi
- 🔧 Proximity Pairing payload boyutları 26 byte'a optimize edildi
- 🔧 Nearby Action payload boyutları 19 byte'a optimize edildi

### v1.0.0 — İlk Sürüm
- 🎉 Nova firmware ilk kararlı sürümü
- WiFi Beacon Spam, Deauth, Captive Portal
- AppleJuice BLE Spam (iOS/Android/Windows)
- TV-B-Gone IR Kontrol
- BadUSB HID Payloads
- Deauth Hunter, BLE Hunter, Pineapple Hunter
- Türkçe arayüz desteği
- Cyberpunk Cyan/Dark tema

---

## ⚖️ Sorumluluk Reddi (Legal Disclaimer)
Bu yazılım sadece **etik siber güvenlik araştırması ve eğitim amaçlı** geliştirilmiştir. İzin alınmamış sistemler, cihazlar veya ağlar üzerinde kullanılması kesinlikle yasaktır ve yasal sonuçlar doğurabilir. Kullanıcı, bu aracın kullanımından doğacak her türlü hukuki ve fiziksel sorumluluğu peşinen kabul eder. **Geliştirici (RedRiveRR), yazılımın kötüye kullanımından sorumlu tutulamaz.**

---

<div align="center">
  <b>NOVA v1.1.1</b> · Geliştiren: <b><a href="https://github.com/RedRiveRR">RedRiveRR</a></b>
</div>
