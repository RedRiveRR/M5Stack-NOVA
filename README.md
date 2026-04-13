# NOVA Firmware v1.1.0

> [!WARNING]
> **PROJE DURUMU: DONDURULDU**
> Bu proje, geçici bir süreliğine veya farklı bir ihtimale kadar geliştirilmeye kapatılmış ve dondurulmuştur. Mevcut sürüm (v1.1.0) kararlı teknik temel olarak kabul edilmektedir.

## Teknik Genel Bakış
NOVA v1.1.0, M5Stack donanım platformları (ESP32 / ESP32-S3) için entegre bir firmware (yazılım) ortamıdır. 802.11 (WiFi), Bluetooth Low Energy (BLE) ve Kızılötesi (IR) protokolleri üzerinden kablosuz sinyal araştırmaları için bir çerçeve sunar.

### Temel Mimari
Sistem, donanım kaynaklarını ve radyo yığınlarını yönetmek için modüler bir işleyici (handler) mimarisi kullanır:
- **RF Katmanı:** Yerel BLE GAP yayınları (advertising) ve ham 802.11 çerçeve enjeksiyonu.
- **Protokol Paketi:** Beacon analizi, Deauthentication (kimlik doğrulama iptali) izleme ve BLE GAP yakınlık testleri gibi sinyal değerlendirme araçlarının uygulanması.
- **Arayüz:** M5Unified / M5GFX kütüphaneleri üzerinden yönetilen işlevsel donanım çıktısı.

## Entegre Modüller

### Kablosuz Ağ (WiFi)
- **Beacon Çerçeve Araştırması:** Sinyal doygunluğu ve ağ protokolü testleri için sentetik SSID çerçevelerinin oluşturulması.
- **Deauthentication İzleme:** 802.11 yönetim (management) çerçevesi müdahalelerinin gerçek zamanlı tespiti ve günlüğe kaydedilmesi.
- **Captive Portal Motoru:** Sızma ve değerlendirme maksatlı lokal HTTP/DNS yönlendirmesi.

### Bluetooth Low Energy (BLE)
- **GAP Yayın Çerçevesi:** iOS (Nearby Action), Android (Fast Pair) ve Windows (Swift Pair) için yakınlık protokollerinin uygulanması.
- **Yakınlık Analizi:** RSSI tabanlı hedef doğrulama ve cihaz kimlik tespiti.

### Kızılötesi (IR)
- **Sinyal İşleme:** Donanım seviyesinde sinyal yakalama, yeniden üretme ve protokole özgü jamming (sinyal karıştırma) rutinleri.
- **Protokol Veritabanı:** Standart televizyon ve ev aletleri kontrolü desteği.

## Donanım Özellikleri
- **Desteklenen Platformlar:** M5StickC Plus2, M5Cardputer, M5Stamp S3.
- **Radyo Bileşenleri:** 2.4GHz dahili RF, IR LED.
- **Giriş/Çıkış:** TFT/LCD Ekran, IMU tabanlı etkileşim.

## Kurulum

### Kaynak Koddan Derleme
```bash
git clone https://github.com/RedRiveRR/M5Stack-NOVA.git
cd M5Stack-NOVA
pio run -e stick_c_plus2 -t upload
```

## Yasal Uyarı
Bu yazılım yalnızca siber güvenlik araştırmaları ve eğitim/test amaçlı olarak sağlanmıştır. Önceden açık izin alınmadan sistemler veya ağlar üzerinde yetkisiz kullanımı kesinlikle yasaktır. Bu aracın uygulanmasına ilişkin tüm yasal sorumluluk tamamen kullanıcıya aittir.
