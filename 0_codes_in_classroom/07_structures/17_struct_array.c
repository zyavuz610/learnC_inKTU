// bu koda sıralama ekleyin
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
  char ad[10];
  int as;
  int fn;
  float or;
  int gk;
};

void ortalama_bul(struct Ogrenci *);
void rasgele_doldur(struct Ogrenci[],int);
void ortalamalar(struct Ogrenci *,int);

int main(void) {
  int n=100;
  //struct Ogrenci o[20]; 
  struct Ogrenci *o;
  o = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);
  rasgele_doldur(o,n);
  ortalamalar(o,n);

  for(int i=0;i<n;i++){
    printf("%s -> %d,%d = %.2f - %d\n",o[i].ad,o[i].as,o[i].fn,o[i].or,o[i].gk);
  }
  
  return 0;
}

void ortalama_bul(struct Ogrenci *o1){
  o1->or= (o1->as + o1->fn)/2.0;
  o1->gk = (o1->or>=50)?1:0;
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
    ortalama_bul(&o[i]);
  }
}
// https://repl.it/@ZaferYavuz1/struct
