#include <iostream>	// std::cout

using namespace std;

// Assembly dilinde cagrilacak baska dosyada tanimli fonksiyon prototipi
int Toplam(int i , int * dizi){
    int top=0;
    for(int d=0;d<i;d++){
        top+=dizi[d];
    }
    return top;
}

int main(int argc, char * argv[])  // Arguman sayisi argc ve Arguman vektoru argv[]
{
	int i=0, elemansayisi=0, dizi[100];
    string s1[5];

// Değişken ve gosterici boyutlari (byte olarak)
	std::cout << sizeof(i) << " byte tamsayi" << std::endl;
	std::cout << sizeof(&i) << " byte tamsayi ptr" << std::endl;

// Komut satirindan verilen argumanlar ile dosyalari ac
	std::cout<<argv[1]<<endl;;

// Assembly dili fonksiyonu cagir ve geri donus degeri  yazdir
	std::cout << Toplam(elemansayisi, dizi) << std::endl;

// Isletim sistemine basarili bitis (0) degeri dondurerek cik
	return 0;
}