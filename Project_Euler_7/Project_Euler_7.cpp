// Project_Euler_7.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void SiebDesEratosthenes(const long N, vector<long> & Primes) {
    bool* isPrime = new bool[N];
    //vector<long long> isPrime;

    for (long i = 2; i < N; i++) 
        if(i == 0 || i == 1){
            isPrime[i] = false;
        isPrime[i] = true;
    }

    int root = sqrt(N);

    for (long j = 2; j < N; j++) {
        if (isPrime[j]) {
            Primes.push_back(j);
            
            for (long k = 2 * j; k < N; k = k + j) {
                isPrime[k] = false;
            }
        }
        else {

        }
    }
}

int main()
{
    vector<long> Primzahlen;
    long size = 200000;
    long WantedPrim = 10001;
    SiebDesEratosthenes(size, Primzahlen);

    long result = Primzahlen[WantedPrim-1]; // size-1 , weil die .at(0) ebenfalls als stelle zählt 

    cout << "Die " << WantedPrim << "-te Primzahl ist: " << result << endl;
}
