#include <stdio.h>

int main(void) {

//----------------------------------------
// daha çok döngü (tekrarlı ifadeler)
/*
  +0) 1-100 arası sayıları yazın
  +1) 20-200 arası sayıları ters sırada yazın
  +2) 1-100 arası tek ve çift sayıları
  +3) 1000 den küçük 3 ve[ya] 5 in katı olan sayılar
  4) 422 sayısının pozitif tam sayı bölenleri
  5) 455 sayısının pozitif tam sayı bölenleri toplamı
  6) 530 sayısının pozitif tam sayı bölenleri sayısının
  7) ekrana üçgen çizin
  8) ekrana ascii tablosunu çizin
  9) ekrana kare(dikdörtgen) çizin
  10) kullanıcıdan alınan 0 girene kadar adet sayının ortalaması / toplamı / max, min, max2, min2
  11) projecteuler.net teki 1. problem
  12) doğal bir sayının rakamları toplamı
  13) satranç tahtası
  14) banka atm problemi
  repl.it/@ZaferYavuz1/c41a değiştiridm
*/
/*
    printf("Merhaba Gençlik\n");
    for( int i=0 ; i<50 ; i++ ){
        printf("*");
    }

    int i=0;
    while(i<50){
        printf("*");
        i++;    
    }
*/
/*

***   ***   ***   ***   
***   ***   ***   ***   
***   ***   ***   ***   
   ***   ***   ***   
   ***   ***   ***   
   ***   ***   ***   
***   ***   ***   ***   
***   ***   ***   ***   
***   ***   ***   *** 
   ***   ***   ***   
   ***   ***   ***   
   ***   ***   ***      
*/
  int n=8,m=14,K=2;
  for(int i=0;i<n;i++){
    for(int k0=0;k0<K;k0++){
      for(int j=0;j<m;j++){
        if((i+j)%2==0){
          for(int k=0;k<K;k++)
            printf("#");
        }
        else{
          for(int k=0;k<K;k++)
            printf(" ");
        }
        if(j==m-1){
          printf("\n");
        }
      }
    }
  }
  return 0;
}
