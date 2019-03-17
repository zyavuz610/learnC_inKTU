/****************************************
  String ler

  Bizim meslek? Bilgi + sayar
    Saymak : if, for, operatörler, fonk. swtich-case

    Bilgi : Veri: değer tutan yapı
      1. Basit veriler: tek bir tutar
        - toplamsal: int, char
        - kayan noktalı: float, double
      2. Karmaşık: birden çok veri tutar
        - lineer: diziler
          * tüm elemanlar aynı tip
          * tek bir isim ve sıra no (indis) ile erişilir
          * tipi basit viri tiplerinden
          * 2 alt kategori
            # diziler (1D, 2D, 3D ...), int, float
            # string:karakter dizileridir (char)
              1. dizi elemanlarının en sonunda NULL bulunur, bu bize nerde duracağımızı söyler
              2. dizinin ismi, tüm elemanları temsil eder
        - non-lineer: farklı tipte veriler içerir
          struct, class 

  String
    1. Tanım: char s[20];
    2. Kullanım:
      - tek tek işlem için döngü
      - toplu işlem için dizi ismi kullanılır        
****************************************/
#include <stdio.h>

int main(void) {
  char s[] = "Zafer";
  char s1[10] = "zafer";
  char s2[] = {'Z','a','f','e','r','\0'};
  printf("Hello %s\n",s2);
  printf("Bir kelime:");
  scanf("%s",s);
  int offset = 'a' - 'A';

  // Büyük harf çevir
  int i=0;
  while(s[i] != '\0'){
    if(s[i] >= 'a'){
      s[i] -= offset;
    }
    i++;  
  }
    
  printf("Hello %s\n",s);
  return 0;
/*
  
  AB
  A : 65
  B : 66

  ALaB -> ABLa

  char temp;
  for(int i=0; s[i]!='\0'; i++)
   {
     for(int k=i+1; s[k]!='\0'; k++)
     {

         if(s[i]>s[k])
         {
           temp=s[k];
           s[k]=s[i];
           s[i]=temp;
         }

     }
*/  
}
