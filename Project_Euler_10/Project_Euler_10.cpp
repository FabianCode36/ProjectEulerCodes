// Project_Euler_10.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const long N = 2000000;

void SiebDesEratosthenes(const int N,  vector<long long>& Prim) {

    bool* isPrim = new bool[N];
    for (int i = 0; i < N; i++) {
        if (i == 0 || i == 1) {
            isPrim[i] = false;
        }
        isPrim[i] = true;
    }

    double RootOfN = sqrt(N);

    for (int j = 2; j < N; j++) {
        if (isPrim[j] == true) {
            Prim.push_back(j);

                for (int k = 2 * j; k < N; k = k + j) {
                    isPrim[k] = false;
                }
        }
        else {

        }
    }
    return;
}

int main()
{
    vector<long long>Primzahlen;

    SiebDesEratosthenes(N,Primzahlen);

    long long result = 0;

    for (unsigned int i = 0; i < Primzahlen.size(); i++) {
        result = result + Primzahlen.at(i);
    }

    cout << "Die Summe der Primzahlen bis 2000000 ist : " << result << endl;
}

// Erg: 142913828922
// MY : 1179908154

