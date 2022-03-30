// Projectt_Euler_5.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

// Smallest multiple

#include <iostream>
using namespace std;

/*
Euklidischer Algorithmus - Klassiche Version
Betrachte größere Zahl und ziehe die kleinere von ihr ab solange, bis nicht mehr größer
Danach selbe Methode nur, das ursprünglich kleinere Zahl nun die größere Zahl ist
Tue dies solange, bis eine Zahl Null ist
*/

// euklidischer Algorithmus ALT
long EA_old(long a, long b) {
	if (a == 0) {
		return b;
	}

	while (b != 0) {
		if (a > b){
			a = a - b;
		}
		else {
			b = b - a;
		}
	}

	return a;
}

// Der moderne Euklidische Algorithmus benutzt anstelle mehrfacher Subtraktionen direkt Modulo um den Differenzwert zu errechnen
long EA_Modern(long a, long b) {

	long h;

	while (a != 0 && b != 0) {

		if (a > b) {
			h = a % b;
			a = h;
		}
		else {
			h = b % a;
			b = h;
		}
	}
	if (a > b)
		return a;
	return b;
}

// GCD = GGT -> Greatest Common Divisor
long GCD(long a, long b) {
	if (a >= 0 && b >= 0) {
		return EA_Modern(a, b);
	}
	else 
		cerr << "KEINE NEGATIVE ZAHLEN...." << endl;
	return -1;
}

// LCM = KGV -> Least Common Multiple
long LCM(long a, long b) {
	long multiple = a * b;
	return double(multiple) / GCD(a, b);
}

long SmallestMultiple(long size) {
	long SUM = 1;

	for (long i = 2; i < size; i++) {
		cout << "kgV von (" << SUM << "|" << i << ") = ";
		SUM = LCM(SUM, i);
		cout << SUM << endl;
	}
	return SUM;
}

int main()
{
	int Value = 20;
	long result = SmallestMultiple(Value);

	cout << "Smalest Positive Number that is evenly divisible by all of the numbers from 1 to " << Value << " : " << result << endl;

}
