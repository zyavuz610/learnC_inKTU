/**************************************
  String ler üzerinde işlemler

  1. strcpy(s1, s2);
    Copies string s2 into string s1.
  2. strcat(s1, s2);
    Concatenates string s2 onto the end of string s1.
  3. strlen(s1);
    Returns the length of string s1.
  4. strcmp(s1, s2);
    Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
  5. strchr(s1, ch);
    Returns a pointer to the first occurrence of character ch in string s1.
  6. strstr(s1, s2);
    Returns a pointer to the first occurrence of string s2 in string s1.

  strstr(s1, s2); -> 5
    012345678
    istanbul -> s1
         bul -> s2

**************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
/*
verilen bir stringin karakter ve ascii karşılıklarını yazalım
    abcABC -> giriş
    a : 97
    b : 98
    c : 99
    A : 65
    B : 66
    C : 67
*/
/*
  char s[10] ="Ferdi";
  for(int i=0;i<10;i++){
    printf("%c : %d\n",s[i],s[i]);
  }
*/  
//***************************************
/*
  verilen 2 stringi peş peşe ekleyelim
  s1 = "Ferdi"
  s2 = "Besli"
  sonuc = "Ferdi Besli" olmalı
*/
/*
  char s1[] = "Ferdi";
  char s2[] = "Besli";
  int i=0;
  while(s1[i] != 0){
    i++;
  }
  s1[i] = ' ';
  i++;
  int j=0;
  while(s2[j] != 0){
    s1[i] = s2[j];
    i++;
    j++;
  }
  s1[i] = 0;
  printf("s1(%d) : %s\n",i,s1);
  printf("s2(%d) : %s\n",j,s2);

  strcat(s1,s2);
  printf("s1 : %s\n",s1);
*/
//*************************************
/*
  string karşılaştırma
*/
  char s1[] = "Alim";
  char s2[] = "Ali";
  int i=0;
  int fark=0;
  while(s1[i] != 0 && s2[i] != 0 && fark == 0){
    fark = s1[i] - s2[i];
    if(fark == 0){
      printf("%s = %s\n",s1,s2);
    }
    else if(fark<0){
      printf("%s < %s\n",s1,s2);
    }
    else{
      printf("%s < %s\n",s2,s1);
    }
    i++;
  }
  printf("%d \n",fark);
  
  printf("%d \n",strcmp(s1,s2));
  // buradaki kodda karşılaştırma eksikliğini gideriniz...

  return 0;
}
