# Basit Hesap Makinesi

Bu proje, temel aritmetik işlemleri gerçekleştiren bir C++ programıdır. Kullanıcıdan alınan matematiksel ifadeleri işleyerek sonuçları hesaplar ve ekrana yazdırır.

## Özellikler

- Toplama, çıkarma, çarpma ve bölme işlemlerini destekler.
- Kullanıcı girişi ile veya komut satırı argümanları ile çalışabilir.

## Gereksinimler

- C++ derleyicisi

## Kurulum

1. Bu projeyi klonlayın veya indirin:
    ```sh
    git clone https://github.com/kullanici_adi/tek-islemli-hesap-makinesi.git
    ```
2. `main.cpp` dosyasını derleyin:
    ```sh
    g++ main.cpp -o hesap_makinesi
    ```

## Kullanım

### Konsol Girişi ile Kullanım

1. Programı çalıştırın:
    ```sh
    ./hesap_makinesi
    ```

2. Program çalıştığında, kullanıcıdan matematiksel ifade girilmesi istenir.

3. Sonuç ekranda görüntülenecektir.

### Komut Satırı Argümanları ile Kullanım

1. Programı komut satırı argümanları ile çalıştırın:
    ```sh
    ./hesap_makinesi "12.5+7.3"
    ```

2. Sonuç ekranda görüntülenecektir.

## Kod Açıklaması

### Ana Fonksiyonlar

- `sonucu_yazdir`: İki sayıyı verilen işlem koduna göre hesaplar ve sonucu ekrana yazdırır.
- `nedir`: Verilen karakterin sayı veya işlem olup olmadığını belirler.
- `main`: Kullanıcıdan girdi alır, girdiği ifadeyi işler ve sonucu hesaplar.

### Kod Akışı

1. Kullanıcıdan matematiksel ifade alınır.
2. İfade içerisindeki karakterler işlenir ve sayılar ile işlem belirlenir.
3. İşleme göre `sonucu_yazdir` fonksiyonu çağrılır ve sonuç ekrana yazdırılır.

## Katkıda Bulunma

Katkıda bulunmak isterseniz, lütfen bir fork yapın ve pull request gönderin. Her türlü katkıya açığız!

