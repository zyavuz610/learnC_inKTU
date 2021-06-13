/**************************************
  polindrom kelime Kontrolü

  bu problem için bir fonksiyon yazılmalıdır,
  bu fonksiyon kelimeyi yani karakter dizisini parametre olarak almalıdır
  kontrol yaptıktan sonra geriye 0 ya da 1 döndürmelidir.
***************************************/

#include <stdio.h>

// stringin rakamları toplamı fonk.
int isPolindromeWord(char cstr[]){
  int boy=0;
  while(cstr[boy] != '\0'){
    boy++;
  }
  int pol = 1;
  for(int i=0;i<boy/2;i++){
    if(cstr[i] != cstr[boy-i-1]){
      pol=0;  // polindrom bozuldu
      break;
    }
  }  
  // polindrom luk bozulmadı ise 1 geri döndürür
  return pol; 
}

int main(void) {
  char c[]="ey edip adanada pide ye";
  printf("%d \n",isPolindromeWord(c));
  return 0;
}