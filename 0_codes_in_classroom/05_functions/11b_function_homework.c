#include <stdio.h>

/*

1)    Fonksiyon çağırma:
        - bir fonksiyonun çalışmasını sağlama işlemine fonk. çağrısı denir.
        - a = fonk(p1,p2,...); şeklinde çağrılır
            . fonksiyon çağrısının sonunda fonk(); şeklinde noktalı virgül konulur
            . parantez içerisinde fonksiyonun argümanları sıralanır (kaç tane varsa)
            . geriye dönüş değeri bir değişkene atanabilir. 

2)    Parametre ve Argüman
        - fonksiyon çağrısı yapılırken fonksiyona gönderilen değerler argüman olarak adlandırılır
        - fonk. tanımı yapılırken fonksiyonun aldığı değişkenler parametre olarak adlandırılır.
*/

int topla(int a,int b){
/*

3)  - a ve b fonk. parameresi olarak adlandırılır.
    - a ve b topla fonk. içerisinde yerel bir değişkenöiş gibi davranır, yani;
        . fonksiyon tamamlanınca ömürleri biter
        . aynı isimde yerel değişken tanımlanamaz
    
    - bu fonksiyon "call by value" ilkesine göre çağrılır
        . buna göre orjinal değerlerin bir kopyası fonksiyona gönderilir

*/
    return a+b;
}

int main(void) {
  int x=5,y=6,z;
  
/*
    - bu fonksiyon "call by value" ilkesine göre çağrılır
        . buna göre orjinal değerlerin bir kopyası fonksiyona gönderilir
        . x, y değerleri argüman olarak isimlendirilir.

*/
  z =   topla(x,y); 


  printf("Toplam : %d",z);

/*
    fonksiyon bu şekilde de çağrılabilir

    printf("Toplam : %d",topla(x,y));
*/

/*
    ödev şu:
        . her çift sayı 2 asal sayının toplamı şeklinde yazılabilir.
        . buna göre verilen bir çift sayının hangi asal sayıların toplamı olduğunu ekrana yazan bir fonksiyonu yazınız.
        . aşağıdaki kodu yeni bir dosyaya kopyalayarak ödeve başlayabilirsiniz.
            . ödev koddaki eksik yerleri doldurarak istenenleri yerine getirme üzerinedir.
        . bu ödevi yapamayan sadece isPrime fonksiyonunun içrisini dodurarak main içerisinde bir sayının asal olup olamdığını kontrol etmek için çağırsın.

---------------------------------------------------

#include <stdio.h>

int isPrime(int n);
void writePrimes(int n);

int main(void) {
  writePrimes(100);
  return 0;
}

int isPrime(int n){
  // asal sayı kodunu buraya yazınız
  // ... 
  // return ... 
}

void writePrimes(int n){
    for(....){
    
    ...
        printf("%d + %d = %d\n",firstPrime,secondPrime,n);

    ...

    }
}

-----------------------------------------------------
Ekran Çıkrısı: (100 için)
3 + 97 = 100
11 + 89 = 100
17 + 83 = 100
29 + 71 = 100
41 + 59 = 100
---------------------------------------------------
*/
  return 0;
}