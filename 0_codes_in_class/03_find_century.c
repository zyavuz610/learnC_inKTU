/*******************************
Önceki Derslerde Neler Gördük?
  - Ekrana sabit karakterler yazmayı
    printf("Hello World");
  - Ekrana sabit + değişken yazmayı
  - 5 aritmetik işlem (operator)
  - basit koşul ifadeleri
Bu derste
  - karmaşık koşul ifadeleri
  - ilişkisel ve mantıksal operatörler
********************************/

#include <stdio.h>
/*
  Girilen bir yılın hangi yy a ait olduğunu bulalım.
*/
int main(void) {
  printf("Yıl:");
  int sene,yy=1;
  scanf("%d",&sene);
  /*
  if(sene%100==0){
    yy=sene/100;
  }
  else{
    yy=sene/100 + 1;
  }
  printf("%d",yy);
  */
  printf("%d -> %d",sene,(sene-1)/100+1);
  return 0;
}
