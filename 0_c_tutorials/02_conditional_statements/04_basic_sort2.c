#include <stdio.h>

int main(void) {
  int no = 258963;
  int ilk3 = no/1000;
  int kck = ilk3%10; // birler
  int ort = (ilk3/10)%10; // onlar
  int byk = (ilk3/100); // yüzler
  int temp;
  // sıralama
  if(kck>ort){
    temp = kck;
    kck = ort;
    ort = temp;
  }
  if(kck>byk){
    temp = kck;
    kck = byk;
    byk = temp;
  }
  if(ort>byk){
    temp = ort;
    ort = byk;
    byk = temp;
  }

  printf("Küçük: %d \n",kck);
  printf("Orta: %d \n",ort);
  printf("Büyük: %d \n",byk);

  return 0;
}
