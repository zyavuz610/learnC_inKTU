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
verilen string içerisinde bir karakter arama
*/
/*
  char s[20] ="Ferdi Besli";
  char ch = 'd';
  int indis = -1;
  int i=0;
  while(s[i] != 0){ // s[i]!='\0'
    if(s[i]==ch){
      indis = i; 
      break;
    }
    i++;
  }
  printf("%c: %d \n",ch,indis);

  printf("%c: %ld \n",ch,(strchr(s,ch)-s));
*/
//****************************************
/*
  verilen 2 stringin karşılaştırılması

*/
  char s1[] = "efen";
  char s2[] = "efendim";
  int ilk,iki;
  int fark = 0;
  int i=0;
  while(1){
    if(s1[i] != 0){ 
      ilk = s1[i];
    }
    else{
      ilk = 0;
    }
    if(s2[i] != 0){
      iki = s2[i];
    }
    else{
      iki = 0;
    }
    if(ilk ==0 && iki ==0){
      break;
    }
    fark = ilk - iki;
    if(fark !=0){
      break;
    }
    i++;
  }
  

  printf("%d \n",fark);

  printf("%d \n",strcmp(s1,s2));
  return 0;
}
