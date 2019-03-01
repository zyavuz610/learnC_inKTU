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
  int n,sayac=0,toplam=0;
  int min=99999,max=-99999,min2=99999,max2=-99999;
  do{
    printf("Sayı :> ");
    scanf("%d",&n);
    if(n!=0 && n<min){
      min2 = min;
      min = n;
    }
    else if(n!=0 && n<min2){
      min2 = n;
    }
    if(n!=0 && n>max){
      max2 = max;
      max = n;
    }
    else if(n!=0 && n>max2){
      max2 = n;
    }
    sayac++;
    toplam += n;
    printf("%d,%d,%d,%d,%d,%d\n",sayac,toplam,min,min2,max2,max);
  }while(n!=0);
  sayac--;
  printf("%d adet sayı girildi\n",sayac);
  printf("Toplam: %d\n",toplam);
  float ort = (sayac!=0)?(float)toplam/sayac:0;
  printf("Ortalama: %.2f\n",ort);
  printf("(Min,Max)=(%d,%d)\n",min,max);
  printf("(Min2,Max2)=(%d,%d)\n",min2,max2);
  return 0;
}
