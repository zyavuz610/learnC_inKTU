/*************************************************
  Pointers
    - basit veri tipleri için pointer
        - int, float, char
        - *(içerik) ve &(adres) operatörleri
    - NULL pointer
        - int  *ptr = NULL;
        - printf("The value of ptr is : %x\n", ptr  );
    - fonksiyonlara pointer aktarımı
        - call by pointer 
        - topla() fonksiyonu, 
        - swap() fonksiyonu
        - dizi sıralama
        - string sıralama
    - dizi-pointer ilişkisi
        - dizi elemanlarına farklı erişim biçimleri
        - pointer aritmetik
            - ++, --, +, -
        - a[i], *(a+i), &a[i]
            - a[i] = *(a+i)
            - (a+i) = &a[i]
    - pointer'a pointer
        int  var;
        int  *ptr;
        int  **pptr;
        var = 3000;
        ptr = &var;
        pptr = &ptr;
        printf("Value of var = %d\n", var );
        printf("Value available at *ptr = %d\n", *ptr );
        printf("Value available at **pptr = %d\n", **pptr);
    - fonksiyona pointer biçiminde dizi aktarımı
        - dizi ortalaması bulan fonk.
        - string uzunluğu bulan fonk.
        - https://www.tutorialspoint.com/cprogramming/c_passing_pointers_to_functions.htm
    - fonksiyonun dizi geri döndürmesi
        - https://www.tutorialspoint.com/cprogramming/c_return_pointer_from_functions.htm
    - algoritma
        - string içinde string arayan fonk.
        - 2 stringin benzerliğinin bulunması (matris kullanılarak)
*************************************************/