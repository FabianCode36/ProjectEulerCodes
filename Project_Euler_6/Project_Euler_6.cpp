// Project_Euler_6.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

// SumSquareDifference

#include <iostream>
#include <cmath>

using namespace std;

long SumOfSquares(int size) {
	long SUM = 0;
	for (int i = 0; i <= size; i++) {
		//SUM += pow(i, 2);
		SUM += (i * i);
	}
	//cout << "SUM: " << SUM << endl;
	return SUM;
}

long SquareOfSum(int size) {
	long SUM = 0;
	for (int i = 0; i <= size; i++) {
		SUM += i;
	}

	//return pow(SUM, 2);

	//cout << "SUM*SUM: " << SUM * SUM << endl;
	return (SUM * SUM);
}

long Difference(int val) {
	return abs(SumOfSquares(val) - SquareOfSum(val));
}

int main()
{
	int Value = 100;
	cout << "Differenz von SumOfSquare und SquareOfSum von 0 bis " << Value << " ist : " << Difference(Value) << endl;
}

