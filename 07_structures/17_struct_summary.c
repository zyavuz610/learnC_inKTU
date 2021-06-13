/*

struct - konular
--------------------------------------------------------------
1) struct yapısı tanımlamak
    struct Ogrenci {
        char ad[10];
        int as;
        int fn;
        float or;
        int gk;
    };

2) değişken deklerasyon (bildirim)
    struct Ogrenci o1,o2[20],*o3;

    bu şekilde tek değişken, dizi ya da pointer tanımlanabilir

3) dinamik yer ayırmak
    struct Ogrenci *o;
    o = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);

4) ilk değer atamak
    struct Ogrenci o1 = {"ALi",10,20,5.5,1};

    bu şekilde tüm elemanlar için {} içerisinde türüne uygun 
    , ile ayrılacak şekilde literalller verilebilir
    
    eksik değer olursa kalanlar 0 değeri alırlar

5) elemanlara erişim
    struct Ogrenci o1;
    o1.as = 10

    ya da

    struct Ogrenci *o2 = &o1;
    o2->fn = 20;

6) struct dizisi
    struct Ogrenci o[20]; 
    o[0].as = 10;

7) dinamik struct dizisi
    struct Ogrenci *o;
    o = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);
    
    o[1].as = 10;

    ya da

    (o+1)->as = 10;

8) fonksiyonlara parametre aktarımı
    call by value ile normal değişken gibi direk aktarılır,
    orjinal değerler değişmez
        void f(struct Ogrenci o1,struct Ogrenci o2);

    call by pointer ile adresler aktarılır
    struct dizileri de bu yöntemle fonksiyonlara aktarılır
        void f(struct Ogrenci *o1,struct Ogrenci *o2);

9) geri dönüş değeri struct olan fonksiyonlara
    tek bir struct geri dönecekse normal değişken gibi return
    struct Ogrenci f(){
        struct Ogrenci o;
        ...
        return o;
    }

    struct dizisi şeklinde geri döndürülecekse pointer şeklinde
    struct Ogrenci * f(){
        struct Ogrenci *o;
        o = (struct Ogrenci *)malloc(sizeof(struct Ogrenci)*n);
        ...
        return o;
    }

    /*
