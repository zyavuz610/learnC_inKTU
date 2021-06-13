/**************************************
 * aşağıda dinamik bellek yönetimi kullanan bir örnek mevcut
 * 
 * 2. yöntem olarak, fonksiyona parametre olarak matris gönderilir ve matrisin içeriği doldurulur
 * matris toplamını bu teknikle yeniden hesaplayınız...
 * 
 * ****************************************/

#include <stdio.h>
#include <stdlib.h>
 
int **matrix_sum(int matrix1[][3], int matrix2[][3]){
    int i, j;
    int **matrix3;
    matrix3 = (int**)malloc(sizeof(int*) * 3);
     
    for(i = 0; i < 3; i++) {
        matrix3[i] = (int *)malloc(sizeof(int*) * 3);
    }
 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return matrix3;
}
 
 
 
int main(){
    int x[3][3], y[3][3];
    int **a;
    int i,j;
 
 
    printf("Enter the matrix1: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d",&x[i][j]);
        }
    }
 
 
    printf("Enter the matrix2: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d",&y[i][j]);
        }
    }
 
 
    a = matrix_sum(x,y); //asigning
    printf("The sum of the matrix is: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
 
    //free the memory
    for(i = 0; i < 3; i++) {
        free(a[i]);
    }
    free(a);
    return 0;
}