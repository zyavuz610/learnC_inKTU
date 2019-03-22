/**************************************
  verilen bir sayının rakamları toplamı
***************************************/

#include <stdio.h>

// sayının rakamları toplamı fonk.
int sumOfDigits(int n){
  int cn=n, top=0;
  while(cn>0){
    top+=cn%10;
    cn/=10;
  }
  return top;   
}

int main(void) {
  int N=1256;
  printf("%d \n",sumOfDigits(N));
  return 0;
}