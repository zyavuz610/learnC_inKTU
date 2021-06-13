/*******************************************
 * dizi sıralama
        verilen bir stringin alfabetik olarak sıralanması
*********************************************/
#include <stdio.h>

/* fonk. sadece stringin adresini alıyor, boyu almasına gereke yok, neden?? */
void sort(char *s){
    char temp;
    for(int i=0;s[i]!=0;i++){
        for(int j=i+1;s[j]!=0;j++){
            if(s[i]>s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }    
}
/*********************************************************************************
 * sıralama için iç içe 2 döngü yeterlidir.
    döngüler dizinin sonuna kadar terarlanmalı,
    1. ve 2. indisler karşılaştırılmalı ve 
        sıralama şartı sağlandığında yer değiştirme olmalıdır (bubble sort)
    neredeyse tüm dizilerin basitçe sıralanması bu şekildedir
    sıralama için başka algoritmalar da vardır (algoritmalar dersine bakınız)
**********************************************************************************/


int main () {
    char s[100];
    printf("Kelime:");  
    scanf("%s",s);
    gets(s);  // boşluklu cümle alınması için kullanılabilir
    printf("%s",s); // dizi sıralamadan önce
    sort(s);
    printf(" -> %s",s);  // sıraladıktan sonra
    return 0;
}

/*********************************************************************************
 * ödev
    bir matris düşünün,
    bu matrisin elemanlarını, boyutunu kullanıcıdan alın
    sütun toplamlarını hesap edin,
    sütün toplamına göre matrisi sıralayın,
        yani en küçük toplama sahip sütun ilk sırada olsun,
        en büyük toplama sahip sütun son sırada olsun

    bu işlemi satır toplamlarına göre sıralama yaparak değiştirebilirsiniz.
**********************************************************************************/