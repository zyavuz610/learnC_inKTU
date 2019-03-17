/**************************************
  DİZİLER
    - aynı tip birden çok değişken saklayan yapı

  Diziler için önemli olan:
    1. Tanım: dizi tipi,ismi, boyut, ilk değer atama
    2. İşlem: erişim, döngü ile işlem
    3. Erişim: sonucu döngü ile göster  
***************************************/

#include <stdio.h>
#define SAYI 11

int main(void) {
  // 10 öğrencinin arasınav notunu alalım, ortalamasını bulalım

  // 1. Tanım
  //int as[10];
  //int as[SAYI]={100};  // ilk değer atama
  //int as[]={0,1,2,3,4,5,6,7,8,9}; // boyut=elem. sayısı

  // 2. erişim:  
  //as[0] = 15; // 1. eleman, 0. indis
  //as[9] = 24; // 10. eleman, 9. indis

  int   as[SAYI];
  int   fs[SAYI];
  float ort[SAYI];
  // döngü ile işlem yap
  for(int i=0;i<SAYI;i++){
    printf("%d. öğreci (arasınav,final):",i+1);
    scanf("%d %d",&as[i],&fs[i]);
  }
  int as_toplam=0,fs_toplam=0,ort_toplam=0;
  for(int i=0;i<SAYI;i++){
    as_toplam += as[i];
    fs_toplam += fs[i];
    ort[i] = 0.5*as[i] + 0.5*fs[i];
    ort_toplam += ort[i];
  }
  float as_ort=(float)as_toplam/SAYI;
  float fs_ort=(float)fs_toplam/SAYI;
  float ort_ort=(float)ort_toplam/SAYI;
  printf("Arasınav ortalama:%.2f \n",as_ort);
  printf("Final ortalama:%.2f \n",fs_ort);
  printf("Sınıf ortalama:%.2f \n",ort_ort);
/*--------------------------------------------
OGR   AS    FS    ORT   HRF   SNC
===   ===   ===   ===   ===   ===
01    50    60    xx    B     G
02    63    75    xx    A     K
03    75    12    xx    F     K
...............................
...............................
15    45    65    xx    B     G
--------------------------------
ORT   xx    yy    vv
----------------------------------------------*/
char harf[SAYI];
printf("OGR\tAS\t\tFS\t\tORT\t\tHRF\tSNC\n");
printf("---------------------------------\n");
for(int i=0;i<SAYI;i++){
    if(fs[i]<45){
    harf[i]='F';
  }
  else if(ort[i]<ort_ort){
    harf[i]='F';
  }
  else if(ort[i]<65){
    harf[i]='C';
  }
  else if(ort[i]<85){
    harf[i]='B';
  }
  else if(ort[i]<=100){
    harf[i]='A';
  }
  if(i+1 <9) printf("0"); 
  if(ort[i]<ort_ort || fs[i]<45){
    printf("%d\t%d\t\t%d\t\t%.1f\t%c\tK\n",i+1,as[i],fs[i],ort[i],harf[i]);
  }
  else{
    printf("%d\t%d\t\t%d\t\t%.1f\t%c\tG\n",i+1,as[i],fs[i],ort[i],harf[i]);
  }
    
  }
printf("---------------------------------\n");  
printf("ORT\t%.1f\t%.1f\t%.1f\n",as_ort,fs_ort,ort_ort);

/************************************************
  int resim[1024][2048];
  int resim[512][512][3]

Banka Problemi İçin

int atm[12][3];

200   25  ?
100   10  ?
50    50  ?
20    63  ?
...........
...........
1     100 ?

*************************************************/

  return 0;
}
