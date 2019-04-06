/*****************************************************
 * dinamik bellek yönetimi, dizi boyutlarını koşma zamanında dinamik olarak ayarlamak demektir.
 * gelenesel dizi tanımında dizi boyutu derleme zamanında sabit olarak belirlenir
 *      int a[100];
 * ancak sabit dizi boyutunun bazı dezavantajları vardır
 *      1) kullanılmayan bellek alanları oluşabilir
 *      2) başlangıçta sabit olarak ayrılan alan yetmeyebilir
 * bu nedenle dizi boyutları dinamik olarak oluşturulabilir
 * kullanılabilecek 4 fonksiyon vardır
 *      malloc(int)
 *          parametre olarak aldığı tamsayı kadar byte yer ayırır
 *          adresini pointer olarak geri döndürür
 *          geri dönen pointer için tür dönüşümü yapılmalıdır
 *          örn;
 *              int *r;
                r = (int *) malloc(20*sizeof(int));

                int **matrix3;
                matrix3 = (int**)malloc(sizeof(int*) * 3);
                for(i = 0; i < 3; i++) {
                    matrix3[i] = (int *)malloc(sizeof(int*) * 3);
                }
        
        calloc(int,int)
            blok şeklinde yer ayırır
            1. parametre blok sayısını, 2. parametre blok boyutunu temsil eder
            örn;
                int *r;
                r = (int *) calloc(n,sizeof(int));

        realloc(ptr, int)
            yeniden boyutlandırır, 
            mevcut değerler kaybolmaz,
            byte cinsinden yeniden yer ayrır
            örn;
                int *r;
                r = (int *) malloc(20*sizeof(int));
                ....
                r = (int *) realloc(r,50*sizeof(int));
        free(ptr)
            parametre olarak verilen adres için ayrılan bellek bölgesini serbet bırakır
            örn;
                int *r;
                r = (int *) malloc(20*sizeof(int));
                ....
                r = (int *) realloc(r,50*sizeof(int));
                ....
                free(r);
******************************************************/

// malloc
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// This pointer will hold the 
	// base address of the block created 
	int* ptr; 
	int n, i, sum = 0; 

	// Get the number of elements for the array 
	n = 5; 
	printf("Enter number of elements: %d\n", n); 

	// Dynamically allocate memory using malloc() 
	ptr = (int*)malloc(n * sizeof(int)); 

	// Check if the memory has been successfully 
	// allocated by malloc or not 
	if (ptr == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 

		// Memory has been successfully allocated 
		printf("Memory successfully allocated using malloc.\n"); 

		// Get the elements of the array 
		for (i = 0; i < n; ++i) { 
			ptr[i] = i + 1; 
		} 

		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (i = 0; i < n; ++i) { 
			printf("%d, ", ptr[i]); 
		} 
	} 

	return 0; 
} 

//*****************************************************************
/*

// calloc
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// This pointer will hold the 
	// base address of the block created 
	int* ptr; 
	int n, i, sum = 0; 

	// Get the number of elements for the array 
	n = 5; 
	printf("Enter number of elements: %d\n", n); 

	// Dynamically allocate memory using calloc() 
	ptr = (int*)calloc(n, sizeof(int)); 

	// Check if the memory has been successfully 
	// allocated by malloc or not 
	if (ptr == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 

		// Memory has been successfully allocated 
		printf("Memory successfully allocated using calloc.\n"); 

		// Get the elements of the array 
		for (i = 0; i < n; ++i) { 
			ptr[i] = i + 1; 
		} 

		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (i = 0; i < n; ++i) { 
			printf("%d, ", ptr[i]); 
		} 
	} 

	return 0; 
} 

*/

//*****************************************************************
/*
// free

#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// This pointer will hold the 
	// base address of the block created 
	int *ptr, *ptr1; 
	int n, i, sum = 0; 

	// Get the number of elements for the array 
	n = 5; 
	printf("Enter number of elements: %d\n", n); 

	// Dynamically allocate memory using malloc() 
	ptr = (int*)malloc(n * sizeof(int)); 

	// Dynamically allocate memory using calloc() 
	ptr1 = (int*)calloc(n, sizeof(int)); 

	// Check if the memory has been successfully 
	// allocated by malloc or not 
	if (ptr == NULL || ptr1 == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 

		// Memory has been successfully allocated 
		printf("Memory successfully allocated using malloc.\n"); 

		// Free the memory 
		free(ptr); 
		printf("Malloc Memory successfully freed.\n"); 

		// Memory has been successfully allocated 
		printf("\nMemory successfully allocated using calloc.\n"); 

		// Free the memory 
		free(ptr1); 
		printf("Calloc Memory successfully freed.\n"); 
	} 

	return 0; 
} 

*/

//******************************************************************
/*

// realloc
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// This pointer will hold the 
	// base address of the block created 
	int* ptr; 
	int n, i, sum = 0; 

	// Get the number of elements for the array 
	n = 5; 
	printf("Enter number of elements: %d\n", n); 

	// Dynamically allocate memory using calloc() 
	ptr = (int*)calloc(n, sizeof(int)); 

	// Check if the memory has been successfully 
	// allocated by malloc or not 
	if (ptr == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 

		// Memory has been successfully allocated 
		printf("Memory successfully allocated using calloc.\n"); 

		// Get the elements of the array 
		for (i = 0; i < n; ++i) { 
			ptr[i] = i + 1; 
		} 

		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (i = 0; i < n; ++i) { 
			printf("%d, ", ptr[i]); 
		} 

		// Get the new size for the array 
		n = 10; 
		printf("\n\nEnter the new size of the array: %d\n", n); 

		// Dynamically re-allocate memory using realloc() 
		ptr = realloc(ptr, n * sizeof(int)); 

		// Memory has been successfully allocated 
		printf("Memory successfully re-allocated using realloc.\n"); 

		// Get the new elements of the array 
		for (i = 5; i < n; ++i) { 
			ptr[i] = i + 1; 
		} 

		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (i = 0; i < n; ++i) { 
			printf("%d, ", ptr[i]); 
		} 

		free(ptr); 
	} 

	return 0; 
} 


*/


//*******************************************************************