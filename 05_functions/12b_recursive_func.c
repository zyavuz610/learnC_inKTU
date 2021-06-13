/**************************************************
  fonksiyon çağırma tipleri
    - bir fonksiyon ismi yazılarak direk çağrılabilir, 
    - bu fonk. içerisinde başka fonk. lar da çağrılabilir,
    - bu durum hiyerarşik biçimde devam edebilir
    - her fonksiyon çağrıldığında mevcut fonksiyonun değerleri yığına kaydedilir, çağrılan fonksiyon sona erdiğinde yığındaki değerler yüklenerek kalınan yerden devam edilir.
    - fonksiyonlar çağrılırken "call by value" yöntemi ile çağrılırsa orjinal değerler değişmez
    - "call by pointer" yöntemi ile çağrılırsa orjinal değerler değişir.(bu konu pointer konusundan sonra daha ayrıntılı bakılacak)

    rekürsif çağırma
      1) direk rekürsif : fonksiyon kendini sürekli çağırır
      2) dolaylı rekürsif: A fonk. B yi çağırır, B fonk. A'yı çağırır
      - rekürsif fonk. da en çok dikkat edilecek nokta bitiş şartının yazılmasıdır.
      - rekürsif fonk. tasarlanırken fonksiyonu kendisi cinsinden yazmak önemlidir.
      - en önenli örnek faktöryel bulunması
      - f(n) = n*f(n-1) şeklinde modelleme yapılabilir.
      - aşağıda örnek kodu görebilirsiniz.
      - siz de ödev olarak fibonacci sayılarını bulan biri rekürsif diğeri de iteratif olacak şekilde 2 ayrı fonk. yazınız
***************************************************/
#include <stdio.h>
 
int fact(int n){
  return (n==1)?1:n*fact(n-1); 
}

int main () {
  printf("%d ",fact(5));
  return 0;
}
