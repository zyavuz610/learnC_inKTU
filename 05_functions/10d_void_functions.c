/**************************************
  Fonksiyonlar
     4 bileşen var
      1. fonk. isimi: değişken tanımlamada kullanılan kurallar geçerlidir
      2. gövde: fonksiyonun içeriği, kodlar
      3. parametre[ler]: 0 ya da daha fazla olabilir
      4: geri dönüş değeri: tek bir değer

**************************************/
#include <stdio.h>

void menu(/*void*/){   // main()
  printf("\n");
  printf("[1] Skor Gir\n");
  printf("[2] Skor Dosyadan Oku\n");
  printf("[5] Puan Durumu Tablosu Göster\n");
  printf("[6] Puan Durumu Tablosu Dosyaya Yaz\n");
  printf("[0] Puan Durumu Tablosu Dosyaya Yaz\n");
  printf("*\\>");
}

int main(void) {
  int secim;
  do{
    menu();
    scanf("%d",&secim);
  }while(secim !=0);
  return 0;
}
