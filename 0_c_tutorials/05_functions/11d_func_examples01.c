/**************************************
  1000 den küçük asal sayılar
***************************************/

#include <stdio.h>

// asal sayı fonk.
int isPrime(int n){
  int sayac=0;
  for(int i=2;i<n;i++){
    if(n%i == 0){
      sayac++;
    }
  }
  return (sayac==0)?1:0;   
}

int main(void) {
  int N=1000;
  for(int i=2;i<N;i++){
    if(isPrime(i))
      printf("%d \n",i);
  }
  return 0;
}