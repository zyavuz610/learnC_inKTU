/*************************************************
  C Structures
    - yapısı, 
        - aynı tipten veri tutan yapılar = diziler
        - farklı türden veri tutan yapılar = struct
    - struct tanımlama
        - struct türünden değişken tanımlama
        - struct elemanlarına erişim
        - https://www.tutorialspoint.com/cprogramming/c_structures.htm
    - fonksiyonlara struct parametre geçişi, geri döndürme
    - struct pointerlar
    - struct dizileri
    - fonksiyonlara struct pointer geçişi, geri döndürme
    - bit seviyesinde eleman tanımlama
        - https://www.tutorialspoint.com/cprogramming/c_bit_fields.htm
*************************************************/

// struct tanımlama ve elemanlara erişim
#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( ) {

   struct Books Book1;        /* Declare Book1 of type Book */
   struct Books Book2;        /* Declare Book2 of type Book */
 
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   /* print Book1 info */
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

   /* print Book2 info */
   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

   return 0;
}

//****************************************************************

/*
// struct yapılarını fonksiyonlara göndermek
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

// function declaration 
void printBook( struct Books book );

int main( ) {

   struct Books Book1;        // Declare Book1 of type Book
   struct Books Book2;        // Declare Book2 of type Book
 
   // book 1 specification 
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   // book 2 specification 
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   // print Book1 info 
   printBook( Book1 );

   // Print Book2 info 
   printBook( Book2 );

   return 0;
}

void printBook( struct Books book ) {

   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}

*/

///***************************************************************

/*
// struct pointer
#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

// function declaration 
void printBook( struct Books *book );
int main( ) {

   struct Books Book1;        // Declare Book1 of type Book 
   struct Books Book2;        // Declare Book2 of type Book 
 
   // book 1 specification 
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   // book 2 specification 
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   // print Book1 info by passing address of Book1 
   printBook( &Book1 );

   // print Book2 info by passing address of Book2 
   printBook( &Book2 );

   return 0;
}

void printBook( struct Books *book ) {

   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}
*/

//****************************************************************