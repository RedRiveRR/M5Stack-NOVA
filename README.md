# 🚀 Nova Firmware

M5Stack cihazları için özel olarak geliştirilmiş, modern ve güçlü bir siber güvenlik araştırma ve dijital şaka platformu. **Nova**, taşınabilir donanımlarınızı profesyonel bir siber güvenlik aracına dönüştürür.

![Nova Matrix Logo](./NovaMatrix.png)

---

## 🌟 Öne Çıkan Özellikler

### 🛡️ Güvenlik ve Farkındalık
- **BadUSB Hunter:** Bağlanan USB cihazlarını (Klavye emülasyonu vb.) analiz eder ve tehlikeli cihazları (Rubber Ducky, O.MG vb.) tespit eder.
- **Deauth Hunter:** Çevrenizdeki WiFi saldırılarını (Deauth/DoS) anlık olarak yakalar ve sizi uyarır.
- **PineAP Hunter:** Sahte erişim noktalarını (Rogue AP) ve WiFi Pineapple cihazlarını tespit eder.
- **BLE Hunter:** Bluetooth reklam saldırılarını ve spam sinyallerini izler.

### ⚡ Saldırı ve Test Araçları
- **AppleJuice:** iOS cihazlar için özelleştirilmiş Bluetooth eşleşme istekleri gönderir.
- **BT/WiFi Spam:** Windows (SwiftPair) ve Android cihazlar için bildirim spamı ve yüzlerce sahte WiFi ağı oluşturma.
- **Nova Portal:** Sosyal mühendislik testleri için özelleştirilebilir sahte giriş sayfası (Captive Portal).
- **TV-B-Gone:** Neredeyse tüm televizyon ve monitörleri tek tuşla kapatma.

### 🛠️ Ek Araçlar
- **WiFi Tarayıcı:** Çevredeki ağları analiz eder ve kopyalar.
- **RTC Saat:** Cihaz kapalı olsa bile saati tutan gerçek zamanlı saat desteği.
- **Tema Desteği:** Özelleştirilebilir Cyberpunk ve Gece Modu temaları.

---

## 📦 Kurulum

### 1. M5Burner (En Kolay Yol)
- [M5Burner](https://docs.m5stack.com/en/download) uygulamasını indirin.
- Cihazınızı seçin (StickC Plus, Plus2 veya Cardputer).
- Arama kısmına **"Nova"** yazın ve **RedRiveRR** tarafından paylaşılan resmi binary'yi indirin.
- **Burn** butonuna basarak yükleyin.

### 2. PlatformIO (Geliştiriciler İçin)
1. Bu repoyu bilgisayarınıza klonlayın.
2. VS Code üzerinde PlatformIO eklentisini açın.
3. `platformio.ini` dosyasından kendi cihaz modelinizi seçin.
4. **Build & Upload** butonuna tıklayın.

---

## 🎮 Kullanım Kılavuzu

Cihaz üzerindeki butonların işlevleri:
- **Ana Ekran (Home):** Aktif işlemi durdurur ve ana menüye döner.
- **İleri (Next):** Menüde aşağı iner veya bir sonraki seçeneğe geçer.
- **Seç (Select):** Seçili işlemi başlatır.

> [!TIP]
> **Türkçe Dil Değisimi:** Ayarlar (Settings) menüsünden **Language** seçeneğine girip **Turkce**'yi seçerek tüm arayüzü kendi dilinize çevirebilirsiniz.

---

## 🤝 Katkıda Bulunma
Geliştirmelere katkıda bulunmak için lütfen bir **Pull Request** açın veya hata bildirimleri için **Issues** kısmını kullanın.

---

## 📄 Lisans ve Uyarı
Bu yazılım sadece **eğitim ve etik test amaçlıdır**. İzin alınmamış sistemlerde kullanılması yasal sorumluluk doğurabilir. Kullanıcı, bu aracın kullanımından doğacak her türlü sonuçtan kendisi sorumludur.

---
*Geliştiren: [RedRiveRR](https://github.com/RedRiveRR)*
