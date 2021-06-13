/*
  DİZİLER

*/

#include <stdio.h>
# define SIZE 2

int main(void) {
  // banka ATM problemi

  double n=1674.74, kalan;
    int i,j;

    printf("%.2f\n\n",n);
    int ikiyuz=n/200; //8
    kalan=n-(ikiyuz*200); // 1647.47-1600)=47..
    printf("ikiyüz %d\n",ikiyuz);

    int yuz=kalan/100;
    kalan=kalan-(yuz*100);
    printf("yüz %d\n",yuz);


    int elli=kalan/50;
    kalan=kalan-(elli*50);
    printf("elli %d\n",elli);

    int yirmi=kalan/20;
    kalan=kalan-(yirmi*20);
    printf("yirmi %d\n",yirmi);


    int on=kalan/10;
    kalan=kalan-(on*10);
    printf("on %d\n",on);

    int bes=kalan/5;
    kalan=kalan-(bes*5);
    printf("bes %d\n",bes);

    int bir=kalan;
    int kalan2=(kalan-bir)*100; // bundan sonra kuruş
    printf("bir %d, kalan %d\n",bir,kalan2);

    int kelli=kalan/50;
    kalan2=kalan2-(kelli*50);
    printf("50 kr %d, kalan %d\n",kelli,kalan2);

    int kyirmibes=kalan/25;
    kalan2=kalan2-(kyirmibes*25);
    printf("25kr %d, kalan2 %d\n",kyirmibes,kalan2);

    int kon=kalan2/10;
    kalan2=kalan2-(kon*10);
    printf("10kr %d, kalan2 %d\n",kon,kalan2);

    int kbes = kalan2/5;
    kalan2=kalan2-(kbes*5);
    printf("5kr %d, kalan2 %d\n",kbes,kalan2);
    
    int kbir=kalan2/1;
    printf("1 kr %d, kalan2 %d\n",kbir,kalan2);
  return 0;
}
