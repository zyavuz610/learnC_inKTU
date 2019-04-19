#include <stdio.h>

struct Ogrenci {
  char ad;
  int as;
  int fn;
  float or;
  int gk;
};

void ortalama_bul(struct Ogrenci *);

int main(void) {
  struct Ogrenci o1 = {'A',60,70,0,0}; 

  ortalama_bul(&o1);
  printf("Ortalama %.2f\n",o1.or);
  return 0;
}

void ortalama_bul(struct Ogrenci *o1){
  o1->or= (o1->as + o1->fn)/2;
  o1->gk = (o1->or>=50)?1:0;
  printf("Ortalama(ic) %.2f\n",o1->or);
}

// https://repl.it/@ZaferYavuz1/struct
