#include <stdio.h>

struct Takim{
  char ad[20];
};

void buyuk_harf(char s[]){
  int f = 'a' - 'A',i=0;
  while(s[i] != 0){
    if(s[i] >= 'a' && s[i] <='z') 
      s[i] = s[i]-f;
    i++;
  }
}

char * buyuk_harf2(const char s[]){
  int f = 'a' - 'A',i=0;
  static char str[100]; 
  while(s[i] != 0){
    if(s[i] >= 'a' && s[i] <='z') 
      str[i] = s[i]-f;
    else
      str[i] = s[i];
    i++;
  }
  str[i] = '\0';
  return str;
}

void ekrana_yaz(struct Takim *t,int n){
  int w=7;
  for(int i=0;i<n;i++){
    //buyuk_harf(t[i].ad);
    //printf("%.3s\n",t[i].ad);
    printf("%.3s\n",buyuk_harf2(t[i].ad));
    /*
    for(int j=0;j<w;j++){
      printf("%c",t[i].ad[j]);
    }
    printf("\n");
    */
  }
}
int main() {
  FILE *fp;
  int n=2;
  struct Takim tk[100];
  fp = fopen("dosya.txt","r");
  if(fp == 0){
    printf("Dosya açma hatası\n");
    return -100;
  }
  fscanf(fp,"%d",&n);
  for(int i=0;i<n;i++){
    fscanf(fp,"%s",tk[i].ad);
  }

  ekrana_yaz(tk,n);
  printf("Hello World\n");
  return 0;
}
