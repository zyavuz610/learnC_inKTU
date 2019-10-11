/*
  Bu dosyada;
    fprintf(fp,str)
    puts(str), fputs(str,fp)
*/




/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}
*/

//***********************************************************************

# include <stdio.h> 
# include <string.h> 
int main( ) 
{ 
	FILE *filePointer ; 
	 
	char data[50] = "Ben C canavarıyım"; 

  puts(data); // ekrana yazar
  printf("%s\t",data);

	filePointer = fopen("deneme.txt", "w") ; 
	
	if ( filePointer == NULL ){ 
		printf( "dosya açılamadı\n" ) ; 
	} 
	else
	{ 

		if ( strlen ( data ) > 0 ) 
		{ 
 
			fputs(data, filePointer) ; 
			fputs("\n", filePointer) ; 
		} 

		fclose(filePointer) ; 

	} 
	return 0;		 
} 
