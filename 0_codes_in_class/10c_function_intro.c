/**************************************
  Fonksiyonlar
     4 bileşen var
      1. fonk. isimi: değişken tanımlamada kullanılan kurallar geçerlidir
      2. gövde: fonksiyonun içeriği, kodlar
      3. parametre[ler]: 0 ya da daha fazla olabilir
      4: geri dönüş değeri: tek bir değer

**************************************/
#include <stdio.h>

// prototip
int carp(int,int,int);


int main(void) {
  int c = carp(5,6,7);
  printf("Çarpım: %d",c);
  return 0;
}

int carp(int a1,int a2,int a3){
  int carpim = a1*a2*a3;
  return carpim;
}
