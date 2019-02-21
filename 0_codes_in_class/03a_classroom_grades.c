/*******************************
Bu uygulamada
  - karmaşık koşul ifadeleri
  - ilişkisel ve mantıksal operatörler
  - if-else merdivenleri
********************************/

#include <stdio.h>
/*
  Arasınav ve final notuna göre harfli not hesaplama
*/
int main(void) {
  char harf_not;
  float ara_sinav=53,donem_sonu=40;
  float ortalama = 0.5*ara_sinav + 0.5*donem_sonu;
  if(donem_sonu<45){
    harf_not = 'F';
  }
  else if(ortalama<40){
    harf_not = 'F';
  }
  else if(ortalama<60){
    harf_not = 'C';
  }
  else if(ortalama<80){
    harf_not = 'B';
  }
  else if(ortalama<=100){
    harf_not = 'A';
  }
  else{
    harf_not = 'E';
  }
  printf("[%.0f,%.0f]=%.1f (%c)",ara_sinav,donem_sonu,ortalama,harf_not);
  return 0;
}
/*
Eve Götüreceğiniz Bilgiler
  - Temel veri tiplerinin dışında türev veri tipleri de var, mesela;
    - short int, long double, unsigned char, gibi
  - long, short gibi ifadeler değişkenin bit sayısını arttırır, doğal olarak alabileceği maximum değer değişir
  - unsigned, signed gibi ifadeler işaretli olup olmadığını belirtir, hiç bir şey yazılmazsa signed(işaretli) olarak kabul edilir ve değişkenin ilk biti işaret biti olarak kullanılır, undigned olarak yazılırsa eksi değer alamaz ve min değer 0 olur.
  - bu türleri internetten araştırın
  - koşul ifadesi
    if(şart){
      ....
    }
    şeklindedir.
  - benzer şekilde 
   if(şart){
     ...
   }
   else{
     ...
   }
   ya da
   if(şart){
     ...
   }
   else if(şart 2){
     ...
   }
   else{
     ...
   }

   yazılabilir.

   - if içerisine yazılan şart 0 veya 1 değeri alabilir.
   - kullanılabilecek operatörler (ilişkisel operatör)
    <, >, <=, >=, ==, !=

  birden çok şartı birbirine bağlayabiliriz (mantıksal operatörler ile)
   &&, ||, !
  if(şart1 && şart2) ...

  Son olarak
  if(ifade)
   burada ifade yerine şart yazılabilir ya da şart olamayan bir işlem sonucu da yazılabilir
  if(1) { // sürekli doğru

  }
  if(a=4) // sürekli doğru

  if(a=0) // sürekli yanlış
*/
