#include <stdio.h>

int main(void) {
  int num = 348395;
  int h1 = (num%10)/1;
  int h2 = (num%100)/10;
  int h3 = (num%1000)/100;
  int h4 = (num%10000)/1000;
  int h5 = (num%100000)/10000;
  int h6 = (num%1000000)/100000;
  int top = 0;
  top += h1 + '0';
  top += h2 + '0';
  top += h3 + '0';
  top += h4 + '0';
  top += h5 + '0';
  top += h6 + '0';
  int hash = top%147;
  printf("%d -> %d\n",num,hash);
  for(int i=0;i<10;i++){
    printf("%d\n",hash);
  }
  int i=0;
  while(i<10){
    printf("%d\n",hash);
    i++;
  }
  return 0;
}
