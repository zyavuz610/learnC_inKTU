//Ayse Doysal 365387
#include <stdio.h>

int isPrime(int n);
void writePrimes(int n);

int main(void) {
    writePrimes(20);

    return 0;
}

int isPrime(int n){
    int i;
    int sayac = 0;
    for (int i = 2; i < n; i++){
        if (n%i == 0)
            sayac++;
    }
    if (sayac == 0)
        return 1;
    else
        return 0;
}

void writePrimes(int n){
    int firstPrime = 3;
    int secondPrime = n-3;
    int i;
    for(i=0; i<n; i++){
        if(isPrime(firstPrime) && isPrime(secondPrime)){
            printf("%d + %d = %d\n",firstPrime,secondPrime,n);
        }
        firstPrime++;
        secondPrime--;
        if(firstPrime >= n || secondPrime <= 1 || i+1>=n/2) break;
    }
}