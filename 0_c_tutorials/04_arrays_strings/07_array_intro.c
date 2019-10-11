/*
  DİZİLER

*/

#include <stdio.h>

int main(void) {
  // 10 öğrencinin arasınav notlarını alalım
  // 1. tanımlama -> isim, boyut, erişim
  // 2. değer atama, üzerinde işlem yapma
  // 3. sonucu göster -> erişim

  // dizi tanımlama
  // int as[10];
  //int as[] = {1,2,3,4,5,6,7,8,9,0};
  int as[10] = {100};

  // erişim ve işlem
  as[0]=25; // 1. eleman, 0. indis
  as[1]=45; // 2. eleman, 1. indis
  // ..... bu şekilde tek tek erişip değer ataması yapabilitriz, bu doğru değil

  for(int i=0;i<10;i++){
    printf("%d. arasınav:",i+1);
    scanf("%d",&as[i]);
  }

  // dizi üzerinde işlem yapalım
  int toplam=0;
  for(int i=0;i<10;i++){
    toplam += as[i];
  }
  float ort = (float)toplam/10;
  printf("Arasınav Ortalama:%.2f",ort);

/*
  // 2 boyutlu dizi, matris, iç içe 2 for ile erişilir, işlem yapılır
  int resim[512][1024];

  // 3 boyutlu dizi
  int resim2[512][1024][3];
*/

  // soru: diziler ve string konusunu ayrı ayrı mı işleyelim, tek bir başlık altında mı işleyelim...

  return 0;
}
