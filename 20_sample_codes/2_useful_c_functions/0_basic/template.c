#include <time.h>
#include <stdio.h>
int main()
{
   clock_t tic = clock();
 
   //kodunuzu buraya yazın.....
   // fonksiyon çağrıları yapabilirsiniz.
 
   clock_t toc = clock();
 
   printf("Toplam Süre: %f saniye\n", (double)(toc - tic) / CLOCKS_PER_SEC);
   return 0;
}
