// Project_Euler_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

/// Even Fibonacci numbers


#include <iostream>
#include <cmath>

using namespace std;

int fib(const int size) {
	int i = 1;
	int j = 0;
	int temp = 0;

	// Summe Anfangs 0 
	int sum = 0;

	while (i < size) {
		temp = i;
		i = i + j;
		j = temp;

		if (j % 2 == 0) {
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int Size = 4 * pow(10, 6); // 4* (10^6) = 4 Mio
	cout << "Summe der geradzahligen Terme: " << fib(Size) << endl;
}

