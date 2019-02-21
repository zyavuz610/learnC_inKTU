/*******************************
Bu uygulamada
  - karmaşık koşul ifadeleri
  - ilişkisel ve mantıksal operatörler
  - if-else merdivenleri
********************************/

#include <stdio.h>
/*
  Elektrik Sayaç Problemi
*/
int main(void) {
  int T1_ilk = 6400;
  int T1_son = 6430;
  int T2_ilk = 7380;
  int T2_son = 7440;
  int T3_ilk = 8320;
  int T3_son = 8410;
  float T1_fiyat = 51.5;
  float T2_fiyat = 102;
  float T3_fiyat = 70.5;
  char tarife = 's'; // 'a'
  /*
  eğer standart tarife ise tüm yakılan elk. T3 tarifensinden hesap edilecek
  değilse akıllı tarife üzerinde hesap edilecek
  */
  int T1_sarf = T1_son - T1_ilk;
  int T2_sarf = T2_son - T2_ilk;
  int T3_sarf = T3_son - T3_ilk;

  float fiyat=0;
  if(tarife == 's'){
    fiyat = (T1_sarf+T2_sarf+T3_sarf)*T3_fiyat;
  }
  else{
    fiyat += T1_sarf*T1_fiyat;
    fiyat += T2_sarf*T2_fiyat;
    fiyat += T3_sarf*T3_fiyat;
  }
  printf("Toplam Fatura: %.2f",fiyat);
 
  return 0;
}
