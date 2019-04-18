#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 2. parametre 0 ise dizi 0 ile dolsun
   2. parametre 1 ise dizi 1 ile dolsun
   2. parametre 2 ise dizi rastgele dolsun
*/
int ort(int,int);
int * yer_ayir(int,int);
void ortalama_bul(int [],int [],int [],int);
void gk_hesapla(int *,int *,int);
float dizi_ortalama(int *,int);
int eleman_say(int *,int,int);

int main(){
  int n=10;
  int *as, *fnl, *ortl, *gk;
  as = yer_ayir(n,2);   // rasgele

  for(long int i=1;i<9999999;i++)
    for(long int j=1;j<99;j++)
      ort(56,68);

  fnl = yer_ayir(n,2);  // rasgele
  ortl = yer_ayir(n,0);  // 0 değerli
  gk = yer_ayir(n,0);   // 0 değerli

  ortalama_bul(as,fnl,ortl,n);
  gk_hesapla(ortl,gk,n);

  for(int i=0;i<n;i++){
    printf("%d = (%d,%d)=%d - %d\n",i,as[i],fnl[i],ortl[i],gk[i]);
  }

  printf("Arasınav Ort: %.2f \n",dizi_ortalama(as,n));
  printf("Final Ort: %.2f \n",dizi_ortalama(fnl,n));
  printf("Sınıf Ort: %.2f \n",dizi_ortalama(ortl,n));
  printf("Geçti Sayısı: %d \n",eleman_say(gk,n,1));
  printf("Kalan Sayısı: %d \n",eleman_say(gk,n,0));
  return 0;
}

int ort(int a,int b){
  return (a+b)/2;
}

int * yer_ayir(int n, int t){
  int *ptr;
  ptr = (int *)malloc(sizeof(int) * n);
  switch(t){
    case 0:
            for(int i=0;i<n;i++){
              ptr[i] = 0;
            }
            break;

    case 1:
            for(int i=0;i<n;i++){
              ptr[i] = 1;
            }
            break;

    default:
            srand( (unsigned)time( NULL ) );
            for(int i=0;i<n;i++){
              ptr[i] = rand()%101;
            }
  }
  
  return ptr;
}

void ortalama_bul(int a[],int f[],int o[],int n){
  for(int i=0;i<n;i++){
    o[i] = ort(a[i],f[i]);
  }
}

void gk_hesapla(int *o,int *gk,int n){
  for(int i=0;i<n;i++,o++,gk++){
    if(*o >=50){  
      *gk = 1;
    }
    else{
      *gk = 0;
    }
  }
}

float dizi_ortalama(int d[],int n){
  float top=0;
  for(int i=0;i<n;i++){
    top += d[i];
  }
  return top/n;
}

int eleman_say(int *dizi,int n,int elm){
  int sayac = 0;
  for(int i=0;i<n;i++){
    if(dizi[i] == elm){
      sayac++;
    }
  }
  return sayac;
}
// https://repl.it/@ZaferYavuz1/snfort
