/******************************************************
 * 
 *  fonksiyonlara pointer aktarımı
 * 
 * *****************************************************/
#include <stdio.h>

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap2(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main () {
    int x=5,y=9;
    printf("(x,y) = (%d,%d) \n",x,y);
    swap(x,y);
    printf("(x,y) = (%d,%d) \n",x,y);
    swap2(&x,&y);
    printf("(x,y) = (%d,%d) \n",x,y);
}