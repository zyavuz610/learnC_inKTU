#include <stdio.h>

int main(void) {
  int numara = 256348;
  printf("Numara: %d \n",numara);

  int num2 = numara%1000; // son 3 hane
  int kucuk = num2%10;  // birler
  int orta = (num2%100)/10;
  int buyuk = num2/100;
  int temp;

  if(kucuk>orta){
     temp = kucuk;
     kucuk = orta;
     orta = temp; 
  }
  if(kucuk>buyuk){
     temp = kucuk;
     kucuk = buyuk;
     buyuk = temp; 
  }
  if(orta>buyuk){
    temp = orta;
    orta = buyuk;
    buyuk = temp;
  }

  printf("Kucuk: %d \n",kucuk);
  printf("Orta: %d \n",orta);
  printf("Buyuk: %d \n",buyuk);
  return 0;
}
