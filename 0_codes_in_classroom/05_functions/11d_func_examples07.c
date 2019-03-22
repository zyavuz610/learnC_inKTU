/**************************************
  matris toplamı, çarpımı, transpozu
***************************************/

#include <stdio.h>
#define N 4
int mat1[N][N] = {  {2,3,4,5},
                    {0,1,2,3},
                    {3,6,9,2},
                    {1,4,5,2}};
int mat2[N][N] = {  {1,3,4,2},
                    {1,2,3,4},
                    {1,0,0,1},
                    {4,1,1,4}};

int mat3[N][N];                    

void sumOfMats(){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
  } 
}

void multOfMats(){
  for(int i=0;i<N;i++){
    for(int j=0;i<N;j++){
      mat3[i][j]=0;
      for(int k=0;k<N;k++){
        mat3[i][j]+=mat1[i][j]+mat2[j][k];
      }
    }
  } 
}

void trenspoze1(){
  int temp;
  for(int i=0;i<N;i++){
    for(int j=i;j<N;j++){
      temp=mat1[i][j];
      mat1[i][j]=mat1[j][i];
      mat1[j][i]=temp;
    }
  } 
}

// 1 matrisi  yaz
void printMat(){
  for(int i=0;i<N;i++){
    printf("| ");
    for(int j=0;j<N;j++){
      printf("%d ",mat1[i][j]);
    }
    printf(" |\n");
  }
}

// 3 matrisi yanyana yaz
void print3Mats(int type){
  for(int i=0;i<N;i++){
    printf("| ");
    for(int j=0;j<N;j++){
      printf("%d ",mat1[i][j]);
    }
    if(type==1 && i==N/2){  // toplama
      printf(" | + | ");
    }
    else if(type==2 && i==N/2){
      printf(" | * | ");
    }
    else{
      printf(" |   | ");    
    }
    for(int j=0;j<N;j++){
      printf("%d ",mat2[i][j]);
    }
    if(i==N/2){
      printf(" | = | ");
    }
    else{
      printf(" |   | ");
    }
    for(int j=0;j<N;j++){
      printf("%d ",mat3[i][j]);
    }
    printf(" |\n");
  }
}

int main(void) {
  sumOfMats();
  print3Mats(1);
  printf("\n");
  trenspoze1();
  printMat();
  return 0;
}