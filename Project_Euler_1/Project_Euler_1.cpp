// Project_Euler_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

/// Mult_of_3_or_5
#include <iostream>

using namespace std;

int SumOfAllTheMultiplesOfThreeOrFive(const int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
		else if (i % 5 == 0) {
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int SizeOfNumbers = 1000;
	cout << "Summe aller Vielfachen von 3 und 5 bis " << SizeOfNumbers << " = " << SumOfAllTheMultiplesOfThreeOrFive(SizeOfNumbers) << endl;;
}

