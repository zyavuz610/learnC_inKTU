#include <stdio.h>
#define MAX_SIZE 100

void fill_matrix(int mat[MAX_SIZE][MAX_SIZE],int n,int m){
    for(int i=0;i<n;i++){                       // matrisin elamanları kullanıcıdan alınıyor
        printf("%d. satır(%d deger): ",i+1,m);  // girişler toplu olarak yapılıyor
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }     
}

void print_matrix(int mat[MAX_SIZE][MAX_SIZE],int n,int m){
    int top;
    for(int i=0;i<n;i++){                       
        printf("%d : ",i);  
        top = 0;
        for(int j=0;j<m;j++){
            printf("%d ",mat[i][j]);
            top+=mat[i][j];
        }
        printf(" = %d \n",top);
    }     
}

void row_sort(int mat[MAX_SIZE][MAX_SIZE],int n,int m){
    // önce satır toplamlarını bulalım,
    int row_sum[MAX_SIZE]={0};
    for(int i=0;i<n;i++){
        row_sum[i] = 0;
        for(int j=0;j<m;j++){
            row_sum[i]+=mat[i][j];
        }
    }

    // şimdi satır toplamlarına göre sıralayalım
    for(int i=0;i<n;i++){                   // sıralama satır boyunca yapılacak
        for(int j=i+1;j<n;j++){             // bu nedenle satır boyutu kadar iç içe 2 for döngüsü kurduk
            if(row_sum[i]>row_sum[j]){      // sıralama koşulu, doğruysa yer değiş
                int temp    = row_sum[i];
                row_sum[i]  = row_sum[j];
                row_sum[j]  = temp;

                // 2 satırın (i ve j) yer değiştirmesi
                for(int k=0;k<m;k++){   // sütun sonuna kadar
                    temp        = mat[i][k];
                    mat[i][k]   = mat[j][k];
                    mat[j][k]   = temp;
                }
            }
        }
    }
}

int main () {
    int mat[MAX_SIZE][MAX_SIZE];    // matris için maksimum yer ayrılıyor
                                    // sadece bize gerekli olduğu kadar matris için yer ayırabiiriz
                                    // ancak dinamik bellek yönetimi (malloc) kullanmak gerekli
    
    int n,m;                                    // matrisin boyutları       
    printf("Matris boyutları (satır,sütun):");  // MAX_SIZE dan büyük olmamalı
    scanf("%d %d",&n,&m);                       
    
    fill_matrix(mat,n,m);
    
    print_matrix(mat,n,m);
    
    row_sort(mat,n,m);
    printf("Sıralamadan Sonra:\n");
    print_matrix(mat,n,m);
    
    return 0;
}