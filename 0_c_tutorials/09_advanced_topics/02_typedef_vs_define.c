/*

typedef vs #define
#define is a C-directive which is also used to define the aliases for various data types similar to typedef but with the following differences −

typedef is limited to giving symbolic names to types only where as #define can be used to define alias for values as well, q., you can define 1 as ONE etc.

typedef interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.

*/

#include <stdio.h>
 
#define TRUE  1
#define FALSE 0
 
int main( ) {
   printf( "Value of TRUE : %d\n", TRUE);
   printf( "Value of FALSE : %d\n", FALSE);

   return 0;
}
