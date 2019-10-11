/*****************************************************
 * fonksiyona matris gibi 2 boyutlu bir diziyi parametre olarak göndermek için
 *  - dizinin boyutları (satır, sütun) verilmelidir
 *  - 2D dizinin 2. boyutu (sütun), dizi tanımında verilmelidir.
 * 
 * aşağıda farklı örnekler mevcut, inceleyiniz...
******************************************************/


/*************************************************************
 *  When both dimensions are available globally (either as a macro or as a global constant).
*************************************************************/
#include <stdio.h> 
const int M = 3; 
const int N = 3; 

void print(int arr[M][N]) 
{ 
	int i, j; 
	for (i = 0; i < M; i++) 
	for (j = 0; j < N; j++) 
		printf("%d ", arr[i][j]); 
} 

int main() 
{ 
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	print(arr); 
	return 0; 
} 

/************************************************************
 * When only second dimension is available globally (either as a macro or as a global constant)
 * 
**************************************************************/

/*
#include <stdio.h> 
const int N = 3; 

void print(int arr[][N], int m) 
{ 
	int i, j; 
	for (i = 0; i < m; i++) 
	for (j = 0; j < N; j++) 
		printf("%d ", arr[i][j]); 
} 

int main() 
{ 
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	print(arr, 3); 
	return 0; 
} 
*/

/*******************************************************************
If compiler is C99 compatible
From C99, C language supports variable sized arrays to be passed simply by specifying the variable dimensions
*******************************************************************/

/*
// The following program works only if your compiler is C99 compatible. 
#include <stdio.h> 

// n must be passed before the 2D array 
void print(int m, int n, int arr[][n]) 
{ 
	int i, j; 
	for (i = 0; i < m; i++) 
	for (j = 0; j < n; j++) 
		printf("%d ", arr[i][j]); 
} 

int main() 
{ 
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	int m = 3, n = 3; 
	print(m, n, arr); 
	return 0; 
}
*/
/*****************************************************************
 * Using a single pointer
**************************************************************/

/*
#include <stdio.h> 
void print(int *arr, int m, int n) 
{ 
	int i, j; 
	for (i = 0; i < m; i++) 
	for (j = 0; j < n; j++) 
		printf("%d ", *((arr+i*n) + j)); 
} 

int main() 
{ 
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	int m = 3, n = 3; 

	// We can also use "print(&arr[0][0], m, n);" 
	print((int *)arr, m, n); 
	return 0; 
} 
*/