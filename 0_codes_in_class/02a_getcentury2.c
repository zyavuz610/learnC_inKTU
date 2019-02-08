/*
  Yazar             : Zafer Yavuz
  Son Güncelleme    : 08.02.2019
  Bugünün probelemi : verilen bir yılın kaçıncı yüzyıla ait olduğunu bulunuz....
    - 1970 - 20yy
    - 2000 - 20yy
    - 2001 - 21yy
    - 2019 - 21yy
*/
#include <stdio.h>
int main(void) {
  int yil = 2001,yy;

//--- 1. çözüm --------------------
/*
  if(yil%100==0){
    yy = yil/100; 
  }
  else {
    yy = yil/100+1;
  }
*/
//----2. çözüm  ---------------
 // yy = (yil-1)/100 + 1;

//----3. çözüm ----------------
  yy = yil/100;
  if(yil%100 > 0){
    yy++;
  }
//-----------------------------

  printf("%d --> %d \n",yil,yy);
  return 0;
}
/*
  Eve Götüreceğiniz Bilgiler
    - yy++ ile yy değişkenini 1 arttırdık
    - if koşulu (basitçe)
    - tamsayı bölme işlemi
    - verilen bir yılın hangi yüzyıla ait olduğunun bulunması (3 farklı algoritma ile)
*/
