/*
  Zafer Yavuz
  Son Güncelleme: 08.02.2019
  Bugünün probelemi: Bir yılın kaçıncı yüzyıla ait olduğunun bulunması         */
#include <stdio.h>
int main(void) {
  /*
  1999 -- 20.yy
  2000 -- 20.yy
  2001 -- 21.yy
  2019 -- 21.yy
  */
  int sene = 2001;
  int kalan = sene%100;   // 99
  int yy = sene/100;      // 19
  if (kalan > 0) {
    yy++;
  }
  printf("%d --> %d.yy",sene,yy);

  printf("----------------------------\n");
  printf("2. Algoritma\n");
  int yy2 = (sene-1)/100 + 1;
  printf("%d --> %d.yy",sene,yy2);
  
  return 0;
}
/*
  Eve Götüreceğiniz Bilgiler
    - yy++ ile yy değişkenini 1 arttırdık
    - if koşulu (basitçe)
    - tamsayı bölme işlemi
    - verilen bir yılın hangi yüzyıla ait olduğunun bulunması (2 farklı algoritma ile)
*/
