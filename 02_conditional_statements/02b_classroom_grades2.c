/*
  Yazar             : Zafer Yavuz
  Son Güncelleme    : 08.02.2019
  Bugünün probelemi : Ortalama Bul, Geçti kaldı hesapla
*/
#include <stdio.h>
int main(void) {
  float ara_sinav,odev,donem_sonu;
  ara_sinav = 47;
  odev = 0;
  donem_sonu = 45;
  float ortalama;
  ortalama = 0.3*ara_sinav + 0.2*odev + 0.5*donem_sonu;
  printf("(%.0f,%.0f,%.0f)\t= %.1f \n",ara_sinav,odev,donem_sonu,ortalama);
  if(donem_sonu < 45){
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
    - \t -- tab karakteri
    - if, else if, else
    - katsayılarla çarparak ortalama bul
*/
