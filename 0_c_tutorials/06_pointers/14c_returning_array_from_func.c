/*****************************************************
 * C dilinde bir fonksiyon aynı anda sadece bir değer geri döndürebilir.
 * Ancak bazı durumlarda birden çok değer geri döndürmek gerekebilir.
 * Bunun için fonksiyonun bir dizi geri döndürmesi yeterli olacaktır.
 * Diziler ise pointer ile temsil edildiğinden fonk.nun pointer geri döndürmesi gerekir.
 * 
 * Genel prototip aşağıdaki gibidir.
 *  
 int * myFunction() {
   .
   .
   .
}

2. olarak dikkat edilmesi gereken husus şudur.
    C dili yerel değişkenlerin geri döndürülmesini tavsiye etmez
    Bu nedenle geri döndürülecek değer static olarak tanımlanmalıdır.
******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function to generate and return random numbers */
int * getRandom( ) {

  // int  r[10];
   static int  r[10];
   int i;

   /* set the seed */
   srand( (unsigned)time( NULL ) );
  
   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

/* main function to call above defined function */
int main () {

   int *p;
   int i;

   p = getRandom();
	
   for ( i = 0; i < 10; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}
