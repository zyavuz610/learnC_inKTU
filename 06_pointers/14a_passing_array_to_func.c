#include <stdio.h> 
  
void fun(int arr[])  // = void fun(int *arr) 
{ 
   unsigned int n = sizeof(arr)/sizeof(arr[0]); 
   printf("\ndizinin boyutu is %d \n", n); 
   for(int i=0;i<n;i++){
       printf("arr[%d] = %d \n",i,arr[i]);
   }
} 

void fun2(int arr[],int n)  // = void fun2(int *arr,int n) 
{ 
    printf("\ndizinin boyutu is %d \n", n); 
   for(int i=0;i<n;i++){
       printf("arr[%d] = %d \n",i,arr[i]);
   }
} 

int main() 
{ 
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
   unsigned int n = sizeof(arr)/sizeof(arr[0]); 
   printf("dizinin boyutu is %d \n", n); 
   fun(arr); 

   fun2(arr,n);
   return 0; 
}
/*****************************************************
 * fun() içerisinde dizinin boyutu bilinmediği için tüm diziye erişilemez,
 * bu nedenle dizinin boyutunu da parametre olarak göndermeliyiz
 * fun2() doğru bir şekilde yazılmıştır. 
******************************************************/