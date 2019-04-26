
/*
  Bu dosyada;
    fscanf
    gets, fgets

*/


/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("program.txt","r")) == NULL){
       printf("Error! opening file");
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}
*/


//******************************************************************

# include <stdio.h> 
# include <string.h> 
int main( ) { 
	FILE *filePointer ; 
	char dataToBeRead[50]; 
	filePointer = fopen("deneme.txt", "r") ; 
	if ( filePointer == NULL ) 	{ 
		printf( "file failed to open." ) ; 
	} 
	else { 		 
		/*
    while( fgets ( dataToBeRead, 50, filePointer ) != NULL ){ 
			printf( "%s" , dataToBeRead ) ; 
		}
    */
    fgets ( dataToBeRead, 50, filePointer );
    //fscanf(filePointer," %s",dataToBeRead);
    puts(dataToBeRead);
    fgets ( dataToBeRead, 50, filePointer );
    puts(dataToBeRead);
		fclose(filePointer) ;		
	} 
	return 0;		 
} 
