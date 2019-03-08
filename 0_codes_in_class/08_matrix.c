/*********************************
2D diziler (matrisler)
  1. tanım
    int a[10][10];
    
    int a1[2][2] = {
      {2,3},
      {4,5}
    };

    int a2[][6] = {
      {2, 3,  5,  6,  8,  9},
      {10,5,  75, -2, 24, 30 },
      {1, 8,  6,  -4, 12, 65},
      {1, 6,  9,  25, 21, 12}
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
      {1, 6,  9,  25, 21, 12}
    };
/* matrisi biçimli yazalım
      0   1  2  3  4  5
    ---------------------   
  0 | 2   3  5  6  8  9
  1 | 10  5  75 -2 24 30
  2 | 1   8  6  -4 12 65
  3 | 1   6  9  25 21 12  

*/
  int n=4,m=6;

  int s1=2,s2=3,temp;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      /*  sütün yer değiştirme
      if(j==s1){
        temp=a2[i][s1];
        a2[i][s1] = a2[i][s2];
        a2[i][s2] = temp;  
      }
      */
      if(i==s1){
        temp=a2[s1][j];
        a2[s1][j] = a2[s2][j];
        a2[s2][j] = temp;  
      }
    }
  }

  printf("    ");
  for(int i=0;i<m;i++){
    printf("%d\t",i);
  }
  printf("\n  ------------------------\n");
  for(int i=0;i<n;i++){
    printf("%d | ",i);
    for(int j=0;j<m;j++){
      if(a2[i][j]<0){
         a2[i][j]=0; 
      }
      printf("%d\t",a2[i][j]);
    }
    printf("\n");
  }

/********************************************
Örnek Projeler
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
