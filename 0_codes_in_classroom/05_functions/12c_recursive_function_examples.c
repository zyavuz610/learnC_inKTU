#include <stdio.h>
 
int fact(int n){
  int carp;
  if(n==1){
    printf("f(%d)\n",n);
    return 1;
  }
  printf("f(%d)\n",n);

  carp = n*fact(n-1);

  printf("f(%d) %d\n",n,carp);

  return carp; 
}

// 1-n arası sayı toplamı
// S(n) = n + S(n-1)
int S(int n){
  if(n==0) return 0;
  return n + S(n-1);
}

// a^n
// a^n = a * a^(n-1)
// P(a,n) = a * P(a,n-1)
int P(int a,int n){
  if(n==0) return 1;
  return a * P(a,n-1);
}

//  a*n
// T(n) = a + T(n-1)
int T(int a,int n){
  if(n==0){
    return 0;
  } 
  printf("%d,%d \n",a,n);
  int toplam = a + T(a,n-1);
  printf("%d \n",toplam);
  return toplam;
}

void my_print(char c[]){
  if(c[0]==0){
    return;
  }
  //printf("%c",c[0]);
  printf("%s - %c \n",c,c[0]);
  my_print(c+1);
  printf("%s - %c \n",c,c[0]);
  //printf("%c",c[0]);
}


int main () {
  printf("%d \n",fact(5));
  /*
  printf("%d \n",S(100));
  printf("%d \n",P(12,4));
  printf("%d \n",T(12,4));
  my_print("ferdi besli");
  */
  return 0;
}
