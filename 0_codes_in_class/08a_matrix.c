/*********************************
2D diziler (matrisler)
  1. tanım
    int a[10][10];
    
    int a1[2][3] = {
      {2,3,4},
      {4,5,7}
    };

    int a2[][6] = {
      {2, 3,  5,  6,  8,  9},
      {10,5,  75, -2, 24, 30 },
      {1, 8,  6,  -4, 12, 65},
      {1, 6,  9,  25, 21, 12},
      {1, -6, -9, 5,  1,  -12}
    };
  2. erişim ve işlem
    erişim: a2[3][3] -> 25
    işlem: iç içe 2 for döngüsü ile
**********************************/

#include <stdio.h>


int main(void) {
  int a2[][6] = {
      {2, 3,  5,  6,  8,  9},
      {10,5,  75, -2, 24, 30 },
      {1, 8,  6,  -4, 12, 65},
      {1, 6,  9,  25, 21, 12},
      {1, -6, -9, 5,  1,  -12}
    };
    int n=5,m=6;
//------------------------------
  int top=0;
  for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
      if(a2[i][j]<0){
        a2[i][j]=0 ;
      }
      else if(a2[i][j]>9) {
        a2[i][j] = 9 ;
      }
      if(i>j) a2[i][j]=0;
    }
  }

// köşegen üzerindeki elemanlar toplamı

// köşegen altında kalan elemanları sıfırla

// 2 sütun yer değiş

// bir satırın toplamını o satır karşısına yaz



// matrisi ekrana yazalım
  for(int j=0;j<m;j++) printf("\t%d",j);
  printf("\n  ------------------------\n");
  for(int i=0;i<n;i++){
    printf("%d | ",i);
    for(int j=0;j<m;j++){
      printf("%d\t",a2[i][j]);
    }
    printf("\n");
  }
/* matrisi biçimli yazalım
      0   1  2  3  4  5
    ---------------------   
  0 | 2   3  5  6  8  9
  1 | 10  5  75 -2 24 30
  2 | 1   8  6  -4 12 65
  3 | 1   6  9  25 21 12 
  4 | 1, -6,-9, 5, 1,-12 

*/

/********************************************
Örnek Projeler
  0. birim matris oluşturun 
  1. negatif sayıların yerine 0 yazın
  2. 2 faklı satırı komple yer değiştirin
  3. 2 faklı sütunu komple yer değiştirin
  4. matrisin transpozunu alın
  5. matrisin satırlar toplamı/ortalaması
  6. matrisin sütunlar toplamı/ortalaması
  7. matriste en küçük/en büyük eleman
  8. satırların minimumu/maximumu
  9. sütunların minimumu/maximumu
  10. bir matris içinde başka bir alt matrisi yazdır
  11. 2 matris toplamı
  12. 2 matris çarpımı
  13. 2 matrisin noktasal çarpımı
  14. 2 matrisin elaman düzeyinde çarpımı
  15. 2 matrisin farkı
  16. matris trace
  17. toplamları minimum olan satırı bulunuz

  ÖDEV: herkes github.com da hesap açsın ve bu problemlerin çözümlerini kendi hesabında çözerek yayınlamaya çalışsın.
*********************************************/
  return 0;
}
