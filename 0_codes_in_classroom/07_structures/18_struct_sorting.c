/*
struct - konular
  birden çok veri içerir
  dizilerden farkı, içerdiği elemanların tipleri farklı
--------------------------------------------------------------
1) struct yapısı tanımlamak
    struct Ogrenci {
        char ad[10];
        int as;
        int fn;
        float or;
        int gk;
    };
2) değişken deklerasyon (bildirim)
    struct Ogrenci o1,o2[20],*o3;
    bu şekilde tek değişken, dizi ya da pointer tanımlanabilir
3) dinamik yer ayırmak
    struct Ogrenci *o;
    o = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);
4) ilk değer atamak
    struct Ogrenci o1 = {"ALi",10,20,5.5,1};
    bu şekilde tüm elemanlar için {} içerisinde türüne uygun 
    , ile ayrılacak şekilde literalller verilebilir
    
    eksik değer olursa kalanlar 0 değeri alırlar
5) elemanlara erişim
    struct Ogrenci o1;
    o1.as = 10
    ya da
    struct Ogrenci *o2 = &o1;
    o2->fn = 20;
6) struct dizisi
    struct Ogrenci o[20]; 
    o[0].as = 10;
7) dinamik struct dizisi
    struct Ogrenci *o;
    o = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);
    
    o[1].as = 10;
    ya da
    (o+1)->as = 10;   // pointer aritmetiği
8) fonksiyonlara parametre aktarımı
    call by value ile normal değişken gibi direk aktarılır,
    orjinal değerler değişmez
        void f(struct Ogrenci o1,struct Ogrenci o2);
    call by pointer ile adresler aktarılır
    struct dizileri de bu yöntemle fonksiyonlara aktarılır
        
        void f(struct Ogrenci *o1,struct Ogrenci *o2);
9) geri dönüş değeri struct olan fonksiyonlara
    tek bir struct geri dönecekse normal değişken gibi return
    struct Ogrenci f(){
        struct Ogrenci o;
        ...
        return o;
    }
    struct dizisi şeklinde geri döndürülecekse pointer şeklinde
    struct Ogrenci * f(){
        struct Ogrenci *o;
        o = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);
        ...
        return o;
    }
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>


struct Ogrenci {
  char ad[5];
  int as;
  int fn;
  float or;
  int gk;
};

struct Ogrenci * yer_ayir(int);
void ortalama_bul(struct Ogrenci *);
void rasgele_doldur(struct Ogrenci[],int);
void ortalamalar(struct Ogrenci *,int);
void sirala(struct Ogrenci[],int);
void yerdegis(struct Ogrenci *,struct Ogrenci *);

int main(void) {
  int n=20;
  struct Ogrenci *o;

  o = yer_ayir(n);
  rasgele_doldur(o,n);
  ortalamalar(o,n);
  sirala(o,n);

  for(int i=0;i<n;i++){
    printf("%s -> [%d , %d] = %.2f - %d\n",o[i].ad,o[i].as,o[i].fn,o[i].or,o[i].gk);
  }
  return 0;
}

struct Ogrenci * yer_ayir(int n){
  struct Ogrenci *ogr;
  ogr = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);
  return ogr;
}

void ortalama_bul(struct Ogrenci *o1){
  o1->or= (o1->as + o1->fn)/2.0;
  o1->gk = (o1->or>=50)?1:0;
}

void rasgele_doldur(struct Ogrenci o[],int n){
    char sesli[] = {'A','E','I','O','U','\0'};
    char sessiz[] = {'B','C','D','F','K','L','M','N','S','T','Z','V','\0'};
    int sli_say = 5;
    int ssiz_say = 12;
    char str[5] = "BABA";
    srand( (unsigned)time( NULL ) );
    for(int i=0;i<n;i++){
      o[i].as = rand()%101;
      usleep(1);
      o[i].fn = rand()%101;

      int ind = rand()%ssiz_say;
      str[0] = sessiz[ind];
      usleep(1);

      ind = rand()%sli_say;
      str[1] = sesli[ind];
      usleep(1);

      ind = rand()%ssiz_say;
      str[2] = sessiz[ind];
      usleep(1);

      ind = rand()%sli_say;
      str[3] = sesli[ind];
      usleep(1);
      str[4] = '\0';

      strcpy(o[i].ad,str);
    }
}

void ortalamalar(struct Ogrenci *o,int n){
  for(int i=0;i<n;i++){
    ortalama_bul(&o[i]);
  }
}

void yerdegis(struct Ogrenci *o1,struct Ogrenci *o2){
  // char *ad, int as, int fn, float ort, int gk
/*
  char Tad[5];
  int Tas,Tfn,Tgk;
  float Tort;
  strcpy(Tad,o1->ad);
  strcpy(o1->ad,o2->ad);
  strcpy(o2->ad,Tad);
  Tas = o1->as;
  o1->as = o2->as;
  o2->as = Tas;
  Tfn = o1->fn;
  o1->fn = o2->fn;
  o2->fn = Tfn;
  Tort = o1->or;
  o1->or = o2->or;
  o2->or = Tort;
  Tgk = o1->gk;
  o1->gk = o2->gk;
  o2->gk = Tgk;
*/

  struct Ogrenci tempO;
  tempO = *o1;
  *o1 = *o2;
  *o2 = tempO;
}

void sirala(struct Ogrenci o[],int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(strcmp(o[i].ad, o[j].ad)<0){
        yerdegis(&o[i],&o[j]);
      }
    }
  }
}
