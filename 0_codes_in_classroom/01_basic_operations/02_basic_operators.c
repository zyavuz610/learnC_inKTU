/*
  Yazar             : Zafer Yavuz
  Son Güncelleme    : 08.02.2019
  Bugünün probelemi : 5 işlem ve sonucu ekrana yazmak
    - +, -, *, /, %
    - 2 adet sayı girilecek
    - 4 işlem yapılıp sonuç üretilecek
    - sonuç ekrana yazılacak
*/
#include <stdio.h>
int main(void) {
  int i_sayi1,i_sayi2;
  i_sayi1 = 45;
  i_sayi2 = 10;
  /*
  normalde sayıları kullanıcıdan giriş olarak almak daha matıklı, ancak sabit bir sayı ataması yaparak daha hızlı deneme imkanı yakalayabiliriz.
  */
  int i_top = i_sayi1 + i_sayi2;
  printf("%d + %d = %d\n",i_sayi1,i_sayi2,i_top);
  int i_fark = i_sayi1 - i_sayi2;
  printf("%d - %d = %d\n",i_sayi1,i_sayi2,i_fark);
  int i_carpim = i_sayi1 * i_sayi2;
  printf("%d * %d = %d\n",i_sayi1,i_sayi2,i_carpim); 
  int i_bolum = i_sayi1 / i_sayi2;
  printf("%d / %d = %d\n",i_sayi1,i_sayi2,i_bolum);
  int i_mod = i_sayi1 % i_sayi2;
  char ch = '%'; // % karakterini ekrana yazarken kullandık.
  printf("%d %c %d = %d\n",i_sayi1,ch,i_sayi2,i_mod);
  // Ekran: %
/*
  Burada dikkat edilecek noktalar
    - programın deneme aşamasında kullanıcıdan alınacak sayıları sabit olarak vermek daha yararlı olur.
    - ekrana özel bir karakter yazamadığımızda ch karakter değişkeni kullanabiliriz. char ch = '%';
    - printf() içerisinde birden çok değişken yazdırabiliriz.
    - her sonuç için ayrı ayrı değişken tanımlamaya gerek kalmadan tek bir sonuç değişkeni kullanabiliriz.
    - 45/10=4, burada tamsayı bölme işlemi var
*/
  
  float f_sayi1,f_sayi2;
  f_sayi1 = 47.2;
  f_sayi2 = 9.5;
  float f_sonuc = f_sayi1 + f_sayi2;
  printf("%f + %f = %f\n",f_sayi1,f_sayi2,f_sonuc);
  f_sonuc = f_sayi1 - f_sayi2;
  printf("%f - %f = %f\n",f_sayi1,f_sayi2,f_sonuc);
  f_sonuc = f_sayi1 * f_sayi2;
  printf("%f * %f = %f\n",f_sayi1,f_sayi2,f_sonuc); 
  f_sonuc = f_sayi1 / f_sayi2;
  printf("%f / %.2f = %.2f\n",f_sayi1,f_sayi2,f_sayi1 / f_sayi2);
  // printf() içerisinde işlem de yapılabilir.
  // %.2f yazarak virgülden sonra yazılacak hane sayısını belirtebiliriz.
  return 0;
}
/*
  Eve Götüreceğiniz Bilgiler
    - 5 işlem
    - printf() ile birden çok değişken yazma
    - % işlemi float türü değişkenler ile kullanılmıyor
    - %.2f
    - özel karakterlerin ekrana yazılması
    - sabit değerler
      - 45 -- tamsayı sabiti
      - 49.7 -- reel sayı sabiti
      - '%' karakter sabiti
    - \n -- alt satıra geç karakteri
*/
