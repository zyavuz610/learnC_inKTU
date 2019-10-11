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
// içi boş dikdörtgen, üçgen
  int n=16,m=16;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      //if(i==0 || j==0 || i==n-1 || j==m-1){
      if(j==0 || i==n-1 || i==j){
        printf("*");
      }
      else{
        printf(" ");
      }

    }
    printf("\n");
  }

  return 0;
}
