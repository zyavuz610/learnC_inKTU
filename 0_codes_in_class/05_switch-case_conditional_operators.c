/*
önceki derslerde
  - veri türleri
  - değişken ve sabitler
  - aritmetik operatörler (+,-,*,/,%)
  - koşul ifadeleri
    - if, if-else,if-else if-...-,else
    - karşılaştırma operatörleri
    - mantıksal operatörler
  - döngü ifadeleri
    - for, while
    - döngülerin bileşenleri
      1. gövde
      2. başlangıç
      3. devam etme şartı
      4. artım
bu derste
  - switch-case
  - koşul operatörü
  - daha çok döngü...
*/

#include <stdio.h>

int main(void) {
/*  
  double saat=168;
  double saat_ucret = 9.65;
  double taban_maas = 1250.5;
  double maas = taban_maas + saat * saat_ucret;
  double vergi=0.0;
  //double kalan = maas;
  if(maas<=1000){
    vergi = 0.10* maas;
  }
  else if(maas<=1500){
    vergi += 0.10 * 1000;
    vergi += 0.15*(maas-1000);
  }
  else if(maas<=2000){
    vergi += 0.10 * 1000;
    vergi += 0.15 * 500;
    vergi += 0.20 * (maas-1500);
  }
  else{
    vergi += 0.10 * 1000;
    vergi += 0.15 * 500;
    vergi += 0.20 * 500;
    vergi += 0.25 * (maas-2000);
  }
  printf("(Maas:Vergi):(%.2f,%.2f)",maas,vergi);
*/
//---------------------------------------
 /* 
  char harf_not;
  float ara_sinav=53,donem_sonu=45;
  float ortalama = 0.5*ara_sinav + 0.5*donem_sonu;
  if(donem_sonu<45){
    harf_not = 'F';
  }
  else if(ortalama<40){
    harf_not = 'F';
  }
  else if(ortalama<45){
    harf_not = 'D';
  }
  else if(ortalama<60){
    harf_not = 'C';
  }
  else if(ortalama<80){
    harf_not = 'B';
  }
  else if(ortalama<=100){
    harf_not = 'A';
  }
  else{
    harf_not = 'E';
  }
  char ch = '%';
  printf("[%.0f,%.1f]=%.2f (%c) \t %c",ara_sinav,donem_sonu,ortalama,harf_not,ch);
  */
/*
  if(harf_not == 'F'){
    printf("Kaldı");
  }
  else if(harf_not == 'D'){
    printf("diğer derslerde başarılı ol");
  }  
  else if(harf_not == 'C' || harf_not == 'B'){
    printf("Geçti");
  }
  else if(harf_not == 'A'){
    printf("süper");
  }
  else{
    printf("eksik giden bir şeyler var");
  }
  */

/*  
  switch(harf_not){
    case 'F' :
              printf("Kaldı");
              break;
    case 'D' :
              printf("diğer derslerde başarılı ol");
              break;
    case 'C' :
              printf("Geçti");
              break;
    case 'B' :
              printf("Geçti");
              break;
    case 'A' :
              printf("süper");
              break;
    default :
              printf("eksik giden bir şeyler var");
  }
*/
//----------------------------------------
// koşul operatörü
  float maas = 1320;
  float vergi = 0;
  /*
  if(maas<=1000){
    vergi = 0.10 * maas;
  }
  else{
    vergi = 0.15 * maas;
  }
  */
  vergi = (maas<=1000)?0.10*maas:0.15*maas;
  printf("Vergi:%.2f",vergi);
//----------------------------------------
// koşul operatörü devam
  int sene = 1920,yy;
  int kalan = sene%100;
  if(kalan == 0){
    yy = sene/100;
  }
  else{
    yy = sene/100+1;
  }
//----------------------------------------
// daha çok döngü (tekrarlı ifadeler)
/*
  +0) 1-100 arası sayıları yazın
  +1) 20-200 arası sayıları ters sırada yazın
  +2) 1-100 arası tek ve çift sayıları
  +3) 1000 den küçük 3 ve[ya] 5 in katı olan sayılar
  4) 422 sayısının pozitif tam sayı bölenleri
  5) 455 sayısının pozitif tam sayı bölenleri toplamı
  6) 530 sayısının pozitif tam sayı bölenleri sayısının
  7) ekrana üçgen çizin
  8) ekrana ascii tablosunu çizin
  9) ekrana kare(dikdörtgen) çizin
  repl.it/@ZaferYavuz1/c41a değiştiridm
*/
  return 0;
}
