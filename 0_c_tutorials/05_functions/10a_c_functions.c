/**************************************
  Fonksiyonlar
     4 bileşen var
      1. fonk. isimi: değişken tanımlamada kullanılan kurallar geçerlidir
      2. gövde: fonksiyonun içeriği, kodlar
      3. parametre[ler]: 0 ya da daha fazla olabilir
      4: geri dönüş değeri: tek bir değer

**************************************/
#include <stdio.h>

//int topla(int,int);

int topla(int sayi1, int sayi2){
  int toplam=sayi1 + sayi2;
  return toplam;
}

int main(void) {
  int top = topla(5,6);
  printf("Toplam:%d",top);
  return 0;
}

