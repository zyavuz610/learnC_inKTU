#include <stdio.h> 
  
int main() 
{ 
    FILE *fp;
    char d[20]; 
    fp = fopen("deneme.txt", "r"); 
      
    // Moving pointer to end 
    fseek(fp, 12, SEEK_CUR); 
    fgets ( d, 5, fp );
    puts(d);

    fseek(fp, -12, SEEK_CUR);
    fgets ( d, 3, fp );
    puts(d);
    // Printing position of pointer 
    printf("%ld", ftell(fp)); 
  
    return 0; 
} 
