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
int * getRandom(int n ) {

  // int  r[10];
  // static int  r[200];
/**************************************

  dinamik bellek yönetiminde
    sonucu istenen pointer tipine dönüştürmek gerekir
  malloc() : byte cinsinden yer ayırır 
  calloc() : blok blok yer ayırır, 2 parametre alır
  realloc(): yeniden boyutlandırır
  free() : yer ayrılan yeri serbest bırakır
  
***************************************/
  int *r;
  r = (int *) malloc(20*sizeof(int));
  //  r = (int *) calloc(n,sizeof(int));

  if(n>=20){
    r = realloc(r,n*sizeof(int));
  }
   int i;

   /* set the seed */
   srand( (unsigned)time( NULL ) );
  
   for ( i = 0; i < n; ++i) {
      r[i] = rand();
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

/* main function to call above defined function */
int main () {

   int *p;
   int i;
    int n = 400;
   p = getRandom(n);
	
   for ( i = 0; i < n; i++ ) {
      printf( "*(p + %d) : %d\n", i, p[i]);
   }

   free(p); 
   return 0;
}
