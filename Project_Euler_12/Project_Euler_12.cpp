// Project_Euler_12.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

// Highly divisible triangular number


#include <iostream>
#include <vector>

using namespace std;

int highlyDivisibleTriangularNum(const int NumOfDivisor){

    //Nummer die immer auf die Summe addiert wird Addiert wird
    long count = 1;

    //aktelle Dreieckszahl
    long result = 0;
    
    for (int i = 0; i < LONG_MAX; i++)
    {
        int total = 0;
        result  += count;
        count++;

        int RootOfSum = (int)sqrt(result);
        for (int c = 1; c <= RootOfSum; c++)
        {
            if (result % c == 0)
            {
                total += 2;
            }
            if (total > NumOfDivisor)
            {
                return result;
            }
        }

    }
    return -1;
}


int main()
{
    int NumOfDivisors = 6;
    cout << "Die Dreieckszahl mit " << NumOfDivisors << "-Teilern ist " <<  highlyDivisibleTriangularNum(NumOfDivisors) << endl;
}

