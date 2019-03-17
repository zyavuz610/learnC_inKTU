/*
  Zafer Yavuz
  Son Güncelleme: 08.02.2019
  Bugünün probelemi: Geçme Notu Hesaplama, geçti kaldı hesapla         */
#include <stdio.h>
int main(void) {
  float ara_sinav = 3;
  float final_sinav = 95;
  float ortalama;
  ortalama = (ara_sinav+final_sinav)/2;
  printf("Ad ve Soyad \t AS\t FNL \tORT\n");
  printf("Ferdi Besli \t %.0f \t %.0f \t%.1f\n",ara_sinav,final_sinav,ortalama);

  if(final_sinav <45){
    printf("Kaldı");
  }
  else if(ortalama < 40){
    printf("Kaldı");
  }
  else{
    printf("Geçti");
  }
  
  return 0;
}
/*
  Eve Götüreceğiniz Bilgiler
    -
*/
