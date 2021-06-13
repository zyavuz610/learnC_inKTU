/******************************************
  Fonksiyon - Örnekler (Asal Sayılar)
******************************************/
#include <stdio.h>

// verilen bir tam sayının pozitif bölen sayısı
int bolenSay(int n){
  int sayac=0;
  for(int i=1;i<=n;i++){
    if(n%i == 0){
      sayac++;
    }
  }
  return sayac-2;   // 1 ve kendisinden başka
  // return sayac;
}

// Asal Sayı Kontrolü
int asalMi(int n){
  return (bolenSay(n)>0) ? 0 : 1;
}

int main(void) {
  // 1-n arası asal sayıları bulalım
  int n=100;
  for(int i=2;i<=n;i++){
    if(asalMi(i))
      printf("%d \n",i);
  }
  
  return 0;
}

/*
  Örnek Problemler (Fonksiyonlar Kullanarak Çözülmelidir)
  - 1000 den küçük kaç asal sayı var
  - 1000 den küçük mükemmel sayılar
  - verilen bir sayının rakamları toplamı
  - verilen bir sayının ikili tabana çevrilmesi
  - polindrom sayıların bulunması (11311 gibi)
  - polindrom kelime Kontrolü
  - matris toplamı
  - matris çarpımı
  - matrisin tranpozunu bulmak
  - iki dizinin vektörel/skalar çarpımı
  - verilen 1D veya 2D dizinin standart sapmasının bulunması
*/
