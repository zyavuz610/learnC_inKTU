/**************************************************
  global değişkenler 
    - tüm fonksiyonların dışında tanımlanır
    - tanımlandıktan sonra her yerde tanınır, 
    - program sonlanıncaya kadar bellekte kalırlar

  lokal değişkenler 
    - fonksiyon ya da program denetim blokları içerisinde tanımlanırlar 
    - tanımlı oldukları blok sona erince bellekten silinirler, 
    - sadece o blok içerisinde tanımlanırlar

  formal değişkenler
    - fonk. parametresi olarak tanımlanırlar
    - lokal değişkenler gibi davranırlar

  aynı isimde global ve lokal değişkenler
    - hata vermez
    - ancak aynı fonksiyon içerisinde aynı isimde lokal ve global değişken varsa, global olan önceliklidir.
***************************************************/
#include <stdio.h>
 
// global değişken, otomatik olarak 0 değeri atanır
int g;

int main () {
  int a, b; // lokal, sadece main içerisinde geçerli
 
  a = 10;  // ilk değer atama
  b = 20;
  g = a + b;  
  
  // int g=5; // hata vermez, bu satırdan sonra g=5 olur (lokal değ.)
  
  printf ("a = %d, b = %d , g = %d\n", a, b, g);

  for(int i=0;i<5;i++){
    // burada i lokal değişken
    printf("%d ",i);
  }

  // burada i tanımlı değil hata verir
  // printf("%d ",i);
 
  return 0;
}

int sum(int a,const int b){
  // burada a ve b formal değişken,
  a = 5; // değişken değeri değiştirilebilir
  // b = 4; // b değeri değiştirilemez
  return a+b;
}