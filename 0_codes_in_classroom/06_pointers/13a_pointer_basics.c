/*************************************************
  Pointers
    - pointer, adres demektir.
    - basit veri türlerinin adresleri tutulabileceği gibi, bir dizinin ya da struct yapısının adresi de tutulabilir.

    - basit veri tipleri için pointer
        - int, float, char
        - *(içerik) ve &(adres) operatörleri
    - NULL pointer
        - int  *ptr = NULL;
        - printf("The value of ptr is : %x\n", ptr  );

    - pointer kullanımı 3 aşamadan ibarettir.
        1) tanım: * operatörü ile tanımlanır
            int *p: int bir değer ya da diziyi işaret eden bir adres
            char *c: char bir değer ya da dizi(string) işaret eden adres
        2) pointer a değer atama
            - hangi adresi göstereceğini belirleme işlemedir.
                int *ptr = NULL; -> NULL pointer hiç bir değeri göstermeyen pointer demektir.
                int *ptr = &a;   -> a değişkeninin adresi
            - dizinin adı o dizinin başlangıç adresidir
                int a[] = {2,3,4,6,7};  -> 5 elemanlı bir dizi
                int *ptr = a;  -> artık dizi değerleri sadece "a" ile değil "ptr" ile de temsil edilir.
        3) Kullanım  
             int a[] = {2,3,4,6,7};
             int *ptr = a;
             ptr[i] = 5;  veya a[i] = 5;
    
    - pointer konusunda dikkat edilmesi gereken önemli hususlar vardır
        . aynı bellek bölgesini gösteren 2 pointer olabilir
        . bir pointer ile erişilerek değer, diğer pointer içeriğinde de değişecektir (doğal olarak).

    - pointer lar fonksiyonlara parametre olarak verilebilir, geri dönüş değeri olabilir.

*****************************************************/
#include <stdio.h>
 
int main () {
  int a=5;      // int türünden basit bir değişken
  int *ptr;
  ptr = &a;     // ptr de a değişkenini gösterir

  *ptr = 10;    // ptr içeriği (dolaylı olarak a nın içeriği) değiştiriliyor

  printf("%d, %d %p \n",a,*ptr, ptr);

  int b[] = {2,3,4,6,7};
  int *p = b;
  p[2] = -1;
  b[1] = -2;
  for(int i=0;i<5;i++){
      printf("%d, %d, %d \n",b[i],p[i],*(p+i));
  }
}