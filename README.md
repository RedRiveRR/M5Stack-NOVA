# 🌌 NOX (Nova Operational X-Sentry)
### *M5Stack Gömülü Sistemler İçin Çok Amaçlı Siber Güvenlik ve Ağ Analiz Platformu*

<div align="center">

[![License](https://img.shields.io/badge/Lisans-GPL--3.0-blue.svg)]()
[![Build](https://img.shields.io/badge/Derleme-Başarılı-brightgreen.svg)]()
[![Platform](https://img.shields.io/badge/Platform-ESP32--S3-black.svg)]()
[![Language](https://img.shields.io/badge/Arayüz-Türkçe-red.svg)]()

![NOVA Operational Logo](NovaMatrix.png)

**NOVA**, M5Stack donanım mimarisi üzerine inşa edilmiş, hafif (lightweight) ancak yüksek performanslı bir siber güvenlik araştırma firmware'idir. Saha operasyonları, sızma testleri ve dijital sinyal analizi prototipleri için optimize edilmiştir.

[Özellikler](#-temel-kabiliyetler) • [Teknik Detaylar](#-teknik-mimari) • [Kurulum](#-kurulum-ve-dağıtım) • [Etik Uyarı](#-sorumluluk-reddi)

</div>

---

## 🚀 Temel Kabiliyetler

NOVA, üç ana operasyonel dikey üzerinde uzmanlaşmış modüller içerir:

### 📡 1. Sinyal ve Spektrum Analizi
*   **BadUSB Denetleyici (HID Analysis):** OTG protokolü üzerinden bağlı olan çevre birimlerinin HID tanım tablolarını (Descriptor Tables) dinamik olarak analiz eder ve Rubber Ducky veya O.MG gibi "Malicious HID" cihazlarını imza tabanlı (Signature-based) olarak tespit eder.
*   **BLE Sentry:** 2.4GHz spektrumundaki Bluetooth Low Energy reklam paketlerini (Adv-Packets) sniff eder, anormallikleri (Flooding/Spam) tespit eder ve RSSI tabanlı mesafe tahmini yapar.
*   **Deauth/DoS Dedektörü:** WiFi yönetim çerçevelerini (Management Frames) gerçek zamanlı olarak dinler ve aktif bağlantı koparma saldırılarını anlık olarak raporlar.

### 🌐 2. Ağ Güvenlik Araştırmaları
*   **Rogue AP (PineAP) Tespiti:** Karma saldırılarını (Karma Attacks) ve sahte erişim noktalarını BSSID/SSID korelasyonu ile ortaya çıkarır.
*   **Nova Captive Framework:** Sosyal mühendislik (Social Engineering) testleri için DNS/HTTP yönlendirmeli, özelleştirilebilir kimlik avı portalı sağlar.
*   **Beacon Flooding:** Stres testleri ve ağ görünürlüğü analizleri için yüzlerce sanal SSID yayını yapma kapasitene sahiptir.

### 📶 3. Bluetooth Operasyonları
*   **BT Proximity Testing (AppleJuice):** iOS ve Android protokolleri arasındaki Bluetooth eşleşme süreçlerini simüle eden paket enjeksiyon modülleri.
*   **SwiftPair & FastPair Analizi:** Modern işletim sistemlerinin "Hızlı Eşleşme" protokollerinin dayanıklılığını test eden paket generatörleri.

---

## 🛠 Teknik Mimari

| Bileşen | Detay |
| :--- | :--- |
| **Donanım** | ESP32, ESP32-S3 (M5Stack Serisi) |
| **Ekran Sürücüsü** | M5Unified / M5GFX (Yüksek Performanslı Framebuffer) |
| **Hafıza Yönetimi** | EEPROM tabanlı kalıcı ayarlar ve SD-SPI entegrasyonu |
| **Ağ Yığını** | Gömülü LwIP ve BLE-Stack enjeksiyon modülleri |

---

## 📦 Kurulum ve Dağıtım

### ⚡ Hızlı Dağıtım (M5Burner)
En güncel kararlı (stable) sürümleri doğrudan **M5Burner** üzerinden dağıtıyoruz:
1.  **M5Burner** uygulamasını çalıştırın.
2.  Sol menüden cihaz ailenizi seçin.
3.  Arama motoruna **"Nova"** girin.
4.  **RedRiveRR** onaylı firmware'i cihazınıza flashlayın.

### 🛠 Geliştirme Ortamı (PlatformIO)
Kaynak koddan özelleştirmek ve yerel derleme yapmak için:
```bash
# Repo klonlama
git clone https://github.com/RedRiveRR/M5Stack-NOVA.git

# Derleme ve Yükleme
pio run -e stick_c_plus2 -t upload
```

---

## ⚖️ Sorumluluk Reddi ve Yasal Uyarı

Bu yazılım, yalnızca **bilgi güvenliği uzmanları, sistem yöneticileri ve araştırma görevlileri** tarafından profesyonel sızma testi senaryoları ve eğitim materyali olarak kullanılmak üzere tasarlanmıştır.

> [!CAUTION]
> **YASAL UYARI:** Yazılımın yetkisiz kurum veya şahıs cihazları üzerinde kullanılması pek çok yargı sisteminde ağır suç teşkil edebilir. Yazılımın operasyonel kullanımından doğacak her türlü hukuki sonuçtan doğrudan kullanıcı sorumludur. Bu projenin geliştiricileri, yazılımın misuse (kötüye kullanımı) durumunda hiçbir sorumluluk kabul etmemektedir.

---

<div align="center">
  Mimari ve Geliştirme: <b><a href="https://github.com/RedRiveRR">RedRiveRR</a></b>
</div>
