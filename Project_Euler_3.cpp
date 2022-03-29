// Project_Euler_3.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

//Largest prime factor

#include <iostream>
#include <list>
#include <cmath>
#include <vector>

using namespace std;

const long long SIZE = 25;
const long long Value = 600851475143;

void SiebDesEratosthenes(const long long Size, list<long long>& Prim) {
	
	vector<bool> isPrim (Size, true);

	isPrim.at(0) = false;
	isPrim.at(1) = false;

	for (long i = 2; i < Size; i++) {
		if (isPrim[i]) {
			Prim.push_back(i);
		}
		for (long j = 2 * i; j < Size; j = j + i) {
			isPrim[j] = false;
		}
	}
}

void PrimFaktorZerlegung(const long long Size, list<long long>& PrimFaktoren, list<long long>& Prim) {

	long long root = sqrt(Size); // Wurzel aus 25

	for (auto it = Prim.begin(); it != Prim.end(); ++it) {
		if (*it <= root) {
			if (Size % (*it) == 0) {
				PrimFaktoren.push_back(*it);
			}
		}
		else {
			break;
		}
	}
}

long long MaxPrimFaktor(long long number) {

	long long PrimZahl = 2;
	long long max = 1;

	while (PrimZahl <= number) {
		if (number % PrimZahl == 0) {
			max = PrimZahl;
			number = number / PrimZahl;
		}
		else {
			PrimZahl++;
		}
	}
	return max;
}

int main()
{
	list<long long>Primzahlen;
	list<long long>PrimFaktoren;

	SiebDesEratosthenes(SIZE, Primzahlen);

	for (auto it = Primzahlen.begin(); it != Primzahlen.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	PrimFaktorZerlegung(SIZE, PrimFaktoren, Primzahlen);
	cout << "Primfaktor von " << SIZE << " sind ";
	for (auto it = PrimFaktoren.begin(); it != PrimFaktoren.end(); ++it) {
		cout << *it << " ";
	}

	cout << endl;

	long MaxPrim = PrimFaktoren.back();
	cout << "Groesster Primfaktor von " << SIZE << " ist " << MaxPrim << endl;

	cout << "Groesster Primfaktor von " << Value << " ist " << MaxPrimFaktor(Value) << endl;


	return 0;
}