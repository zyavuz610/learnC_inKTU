#include <stdio.h>

int main(void) {
  int no = 134963;
  int b1 = (no/1)%10;
  int b2 = (no/10)%10;
  int b3 = (no/100)%10;
  int b4 = (no/1000)%10;
  int b5 = (no/10000)%10;
  int b6 = (no/100000)%10;

  int top = 0;
  top += b1 + '0';
  top += b2 + '0';
  top += b3 + '0';
  top += b4 + '0';
  top += b5 + '0';
  top += b6 + '0';

  int hash = top%97;
  for(int i=0;i<5;i++){
    printf("%d = %d \n",no,hash);
  }
  int i=0;  
  while(i<5){
    printf("%d = %d \n",no,hash);  
    i++;
  }
  return 0;
}
