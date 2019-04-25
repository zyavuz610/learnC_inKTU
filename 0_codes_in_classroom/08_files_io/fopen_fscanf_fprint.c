/*
  1) #include
    #include <stdio.h> - fscanf(fp,...), fprintf(fp,...)

  2) dosya değişkeni tanımlama
    FILE *fp;

  3) dosyayı aç
    fp = fopen(dosya yolu,mode);

  4) işlem yap
    a) yaz - fprintf()
    b) oku - fscanf()

  5) dosyayı kapat
*/
#include <stdio.h>

int main(void) {
  FILE *dosya;
  char ad[20],soyad[20];
  int yas;


  if( !(dosya = fopen("deneme.txt","r")) ){
    printf("Dosya açma hatası\n");
    return -1;
  }

  while( !feof(dosya) ){
    fscanf(dosya,"%s %s %d",ad,soyad,&yas);
    printf("Ad:%s\nSoyad:%s\nYas:%d\n",ad,soyad,yas);
    printf("-----------------\n");
  }
  

  fclose(dosya);
  printf("Hello World\n");
  return 0;
}

// https://repl.it/@ZaferYavuz1/fileio
