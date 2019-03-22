#include <stdio.h>

int isPrime(int n);
void writePrimes(int n);

int main(void) {
  writePrimes(100);
  return 0;
}

int isPrime(int n){
  // asal sayı kodunu buraya yazınız
  // ...
  int sayac=0;
  for(int i=2;i<n;i++){
    if(n%i == 0){
      sayac++;
    }
  }
  return (sayac==0)?1:0;   
}

void writePrimes(int n){
    for(int i=3;i<n/2;i++){
      if(isPrime(i) && isPrime(n-i)){
        printf("%d + %d = %d\n",i,n-i,n);
      }
    }
}