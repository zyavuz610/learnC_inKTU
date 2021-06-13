/**************************************
  verilen bir sayının ikili tabana çevrilmesi
***************************************/

#include <stdio.h>

// sayının rakamları toplamı fonk.
void toBinary(int n){
  int cn=n, boy=0, dizi[15], i=0;
  while(cn>0){
    dizi[boy]=cn%2;
    cn/=2;
    boy++;
  }
  for(int i=boy-1;i>=0;i--){
    printf("%d",dizi[i]);
  }   
}

int main(void) {
  int N=12;
  toBinary(N);
  return 0;
}