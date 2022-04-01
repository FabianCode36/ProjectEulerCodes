// Project_Euler_9.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

// Special Pythagorean triplet

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long targetValue = 1000;
	int size = 500;

	for (long a = 1; a < size; a++) {
		for (long b = a + 1; b < size; b++) {

			long a2 = a * a;
			long b2 = b * b;

			long c2 = a2 + b2;
			double c = sqrt(c2);

			if ((a + b + c) == targetValue && a2 + b2 == (c*c)) {
				cout << "a = " << a << " b = " << b << " c = " << c << endl;
				cout << "a^2 = " << a2 << " b^2 = " << b2 << " c^2 = " << c*c << endl;
				long result = a * b * c;

				cout << "Das Produkt der Zahlen a,b,c die zusammen " << targetValue << " ergeben ist: " << result << endl;
			}

		}
	}
}

