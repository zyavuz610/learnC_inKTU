
// Read from a text file using fscanf()
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}

//******************************************************************

/*
// C program to Open a File, 
// Read from it, And Close the File 

# include <stdio.h> 
# include <string.h> 

int main( ) 
{ 

	// Declare the file pointer 
	FILE *filePointer ; 
	
	// Declare the variable for the data to be read from file 
	char dataToBeRead[50]; 

	// Open the existing file GfgTest.c using fopen() 
	// in read mode using "r" attribute 
	filePointer = fopen("GfgTest.c", "r") ; 
	
	// Check if this filePointer is null 
	// which maybe if the file does not exist 
	if ( filePointer == NULL ) 
	{ 
		printf( "GfgTest.c file failed to open." ) ; 
	} 
	else
	{ 
		
		printf("The file is now opened.\n") ; 
		
		// Read the dataToBeRead from the file 
		// using fgets() method 
		while( fgets ( dataToBeRead, 50, filePointer ) != NULL ) 
		{ 
		
			// Print the dataToBeRead 
			printf( "%s" , dataToBeRead ) ; 
		} 
		
		// Closing the file using fclose() 
		fclose(filePointer) ; 
		
		printf("Data successfully read from file GfgTest.c\n"); 
		printf("The file is now closed.") ; 
	} 
	return 0;		 
} 
*/