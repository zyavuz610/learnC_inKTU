/**************************************
  polindrom sayıların bulunması (11311 gibi)
***************************************/

#include <stdio.h>

// sayının polindrom kontrolü fonk.
int isPolindrome(int n){
  int cn=n, boy=0, dizi[15];
  while(cn>0){
    dizi[boy]=cn%10;
    cn/=10;
    boy++;
  }
  int pol = 1;
  for(int i=0;i<boy/2;i++){
    if(dizi[i] != dizi[boy-i-1]){
      pol=0;  // polindrom bozuldu
      break;
    }
  }  
  // polindrom luk bozulmadı ise 1 geri döndürür
  return pol; 
}

int main(void) {
  int N=132231;
  printf("%d \n",isPolindrome(N));
  return 0;
}