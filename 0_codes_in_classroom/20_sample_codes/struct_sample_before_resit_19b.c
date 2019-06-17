/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

char sesli[] = {'A','E','I','O','U','\0'};
char sessiz[] = {'B','C','D','F','K','L','M','N','S','T','Z','V','\0'};
int sli_say = 5;
int ssiz_say = 12;

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
struct Ogrenci * dosyadan_oku(char [],int);
void ortalamalar(struct Ogrenci *,int);
void sirala(struct Ogrenci[],int,int);
void yerdegis(struct Ogrenci *,struct Ogrenci *);
void dosyaya_yaz(struct Ogrenci [],int,char []);
void ekrana_yaz(struct Ogrenci [],int);

int main(void) {
  int n=20;
  struct Ogrenci *o;

  //o = yer_ayir(n);
  //rasgele_doldur(o,n);
  o = dosyadan_oku("deneme.txt",n);

  ortalamalar(o,n);
  sirala(o,n,-1);

  dosyaya_yaz(o,n,"deneme2.txt");
  ekrana_yaz(o,n);
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
struct Ogrenci ortalama_bul2(struct Ogrenci o1){
  struct Ogrenci o=o1;
  o.or= (o.as + o.fn)/2.0;
  o.gk = (o.or>=50)?1:0;
  return o;
}

void rasgele_doldur(struct Ogrenci o[],int n){
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
    //ortalama_bul(&o[i]);
    o[i] = ortalama_bul2(o[i]);
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

void sirala( struct Ogrenci *o, int n, int t){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if( t*(o[i].as - o[j].as) < 0 ){
        yerdegis(&o[i],&o[j]);
      }
    }
  }
}

void dosyaya_yaz(struct Ogrenci *o,int n,char *s){
  FILE *fp;
  if ( !(fp = fopen(s,"w")) ){
    printf("Dosya (%s) açma hatası\n",str);
    return;
  }
  for(int i=0;i<n;i++){
    fprintf(fp,"%s -> [%d , %d] = %.2f - %d\n",o[i].ad,o[i].as,o[i].fn,o[i].or,o[i].gk);
  }
  fclose(fp);
}

void ekrana_yaz(struct Ogrenci o[],int n){
  for(int i=0;i<n;i++){
    printf("%s -> [%d , %d] = %.2f - %d\n",o[i].ad,o[i].as,o[i].fn,o[i].or,o[i].gk);
  }
}

struct Ogrenci * dosyadan_oku(char str[],int n){
  FILE *fp;
  if ( !(fp = fopen(str,"r")) ){
    printf("Dosya (%s) açma hatası\n",str);
    return NULL;
  }
  struct Ogrenci *o;
  o = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);
  for(int i=0;i<n;i++){
    fscanf(fp,"%s %d %d",o[i].ad,&o[i].as,&o[i].fn);
    
  }
  return o;
}
// https://repl.it/@ZaferYavuz1/c17haz

