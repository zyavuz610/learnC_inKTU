/*
  - Tanışalım
  - Konu tabanlı yerine beceri tabanlı
  - En az 3 kanal
    - görme, işitme, dokunma
  - Bilgi + Sayar
    - bu ders sayma eylemi ile ilgili
*/
#include <stdio.h>
// bu bir yorum satırıdır
/* bu

da

bir

yorum

bloğudur

*/
/*
  Yorum satırı kullanmak faydalıdır. 
  Çok eski zamanların birinde programcının biri bir iş için bir kod yazmış, ancak açıklama satırı yazmayı ihmal etmiş. Tam müşteriye sunum yapacağı sırada program hata vermiş, hatayı düzeltmek istemiş ama koda bakmış bakmış hiç bir şey hatırlamıyor, "Yahu ben burda ne demek istedim" diye mırıldanıp durmuş. En sonunda pes etmiş ve şöyle demiş:
  "Bu kodu yazarken ne yapmak istediğimi bir ben bir de Allah biliyordu, şimdi sadece Allah biliyor"
*/

int main(void) {
  printf("Merhaba Programlama Dunyasi\n");
  printf(".....\n");
  printf("Bölüme Giriş Yılı:");
  int buyil = 2019;
  int yil = 2016;
  float oran = 2.5;
  char ch = 'A';
  int sinif = buyil - yil;

  printf("%d \n%f \n%c \nSınıf:%d",yil,oran,ch,sinif);
  /*
  printf("\n");
  printf("%f",oran);
  printf("\n");
  printf("%c",ch);
  printf("\n");
  printf("Sınıf:%d",sinif);
*/
  // hadi not ortalamasını bulalım
  float ara_sinav,final_not;
  ara_sinav = 29.3;
  final_not = 75.2;
  float ortalama = 0.5*ara_sinav + 0.5*final_not;
  printf("Ortalama:%f",ortalama);
  return 0;
}
/* Eve Götürülecek Bilgiler
- her programda mani() fonk. olması gerekir
- ekrana bir şey yazmak için printf() fonk. kullanırız
  - yeni satıra geçmek için: \n
- her program 2 bileşene sahiptir
  - veri
  - veriyi işleyen kod
- veriler değişkenler içinde saklanır
- değişkenler farklı veri türleri şeklinde olabilir
- kabaca veri türleri
  - tamsayı (int)
  - reel sayı (float,double)
  - karakter
- int yil = 2016;
  - değişken ismi : yil
    - değişken isimlendirirken bunun bir kuralı var mı?
      - dilin ayrılmış kelimelerini kullanamayız, int diye değişken ismi olmaz
      - büyük küçük harf ayrımı var
        - yil, Yil, yiL farklı değişkenler
      - boşluk kullanılmaz, karakter, sayı, _ kullanılabilir
      - sayı ile başlamaz
      - aynı değişken bölgesindeki her değişkenin ismi farklı olmalı
      - hadi kendimize bir tarz (style) seçelim
        - tamamı küçük harf (tek kelime için)
        - kelime olarak isim olsun
        - birden çok kelimeden oluşuyorsa _ ile ayıralım
        - değişken ismi yaptığı işi anımsatsın
        - mümkün olduğunca açıklayıcı olsun
  - değişken değeri : 2016
  - değişken türü : tamsayı
  - 1 tane değer içerir
- printf() ile ekrana değişkenleri yazarken
  - %d : int türü için
  - %f : float türü için
  - %c : char türü için
*/
