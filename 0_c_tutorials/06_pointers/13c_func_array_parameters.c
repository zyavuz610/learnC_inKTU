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
int ortalama(int dizi[], int n){
    int top=0;
    for(int i=0;i<n;i++){
        top+=dizi[i];
    }
    return top/n;
}

int diziBoy(char *s){
    int i=0;
    while(s[i]!='\0') i++;
    return i;
}


int main(void) {
    int dizi[] = {2,3,4,5,0,1,2,3,3,6,9,2};

/***************************************************************
 *  dizi, fonk.na parametre olarak gönderilirken boyutu da gönderilmelidir.
 *  çünkü başlangıç adresinden itibaren ne kadar gidileceği belli değildir.
****************************************************************/
    int boy = ortalama(dizi,12);
    printf("Ort:%d \n",boy);

    char s[] = "c programlama";

/***************************************************************
 *  string, fonk.na parametre olarak gönderilirken boyutunu göndermeye gerek yok
 *  çünkü NULL görene kadar gitmek yeterli olacaktır.
****************************************************************/
    int boy2 = diziBoy(s);
    printf("Boy:%d \n",boy2);


    return 0;
}