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
    int n,top=0,adet=0,maks=-99999,min=99999,maks2=-99999,min2=99999;
    do{
        printf("Sayı:> ");
        scanf("%d",&n);
        top += n;
        adet++;
        if(n!=0 && n>maks){
          maks2 = maks;
          maks = n;
        }
        else if(n!=0 && n>maks2){
          maks2 = n;
        }
        if(n!=0 && n<min){
          min2 = min;
          min = n;
        }
        else if(n!=0 && n<min2){
          min2 = n;
        }

    }while(n!=0);
    adet--;
    printf("%d adet sayı girildi\n",adet);
    printf("Toplam:%d\n",top);
    float ort = (adet!=0)?((float)top)/adet:0;
    printf("Ortalama:%.2f\n",ort);
    printf("(Min,Max)=(%d,%d))\n",min,maks);
    printf("(Min2,Max2)=(%d,%d))\n",min2,maks2);
  return 0;
}
