/*
  DİZİLER

*/

#include <stdio.h>
# define SIZE 2

int main(void) {
  // N öğrencinin arasınav, final notlarını alalım, ortalamayı bulalım, geçti kaldı hesaplayalım

  float as[SIZE] = {100};
  float fs[SIZE] = {100};
  float ort[SIZE] = {100};

  for(int i=0;i<SIZE;i++){
    printf("%d. ogrenci (as,fs):",i+1);
    scanf("%f %f",&as[i],&fs[i]);
  }

  // ortlama için toplam bulalım
  float as_toplam=0, fs_toplam=0;
  for(int i=0;i<SIZE;i++){
    as_toplam += as[i];
    fs_toplam += fs[i];
    ort[i] = 0.5*as[i] + 0.5*fs[i];
  }
  float as_ort = (float)as_toplam/SIZE;
  float fs_ort = (float)fs_toplam/SIZE;
  printf("OGR\tAS\t\tFS\t\tORT\t\tSNC\n");
  for(int i=0;i<SIZE;i++){
    if(ort[i]<45){
      printf("%d\t%.1f\t%.1f\t%.1f\tKaldı\n",i+1,as[i],fs[i],ort[i]);
    }
    else{
      printf("%d\t%.1f\t%.1f\t%.1f\tGeçti\n",i+1,as[i],fs[i],ort[i]);
    }
    
  }
  printf("ORT\t%.1f\t%.1f\n",as_ort,fs_ort);

/*
  // 2 boyutlu dizi, matris, iç içe 2 for ile erişilir, işlem yapılır
  int resim[512][1024];

  // 3 boyutlu dizi
  int resim2[512][1024][3];
*/

  // soru: diziler ve string konusunu ayrı ayrı mı işleyelim, tek bir başlık altında mı işleyelim...

  return 0;
}
