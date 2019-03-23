/*****************************************************
 * 
 * - fonksiyona pointer biçiminde dizi aktarımı
 *       - dizi ortalaması bulan fonk.
 *       - string uzunluğu bulan fonk.
 * 
 * ****************************************************/

// 

#include <stdio.h>

// ortalama() ve diziBoy() fonksiyonlarını gerçekleyiniz.

int main(void) {
    int dizi[] = {2,3,4,5,0,1,2,3,3,6,9,2};
    int boy = ortalama(dizi,12);

    char s[] = "c programlama";
    int boy2 = diziBoy(s);


    return 0;
}