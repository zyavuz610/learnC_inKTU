/**************************************
  1000 den küçük mükemmel sayılar
***************************************/

#include <stdio.h>

// mükemmel sayı fonk.
int isPerfect(int n){
  int top=0;
  for(int i=1;i<n;i++){
    if(n%i == 0){
      top+=i;
    }
  }
  return (top==n)?1:0;   
}

int main(void) {
  int N=1000;
  for(int i=2;i<N;i++){
    if(isPerfect(i))
      printf("%d \n",i);
  }
  return 0;
}