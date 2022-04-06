// Project_Euler_14.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

// Longest Collatz Sequence

#include <iostream>

const long long SIZE = 1000000;

long long LongestCollatzSequence(const long long n) {

    long long counter = 0;
    long long number = n;

    while (number > 1) {
        if (number % 2 == 0) {
            counter++;
            number = number / 2;
        }
        else {
            counter++;
            number = 3 * number + 1;
        }
    }

    return counter;
}

int main()
{
    long long longestSequenzIndex = 0;
    long long longestSequenz = 0;

    long long counter;

    for (long i = 2; i < SIZE; i++) {
        counter = LongestCollatzSequence(i);

        if (counter > longestSequenz) {
            longestSequenz = counter;
            longestSequenzIndex = i;
        }
    }

    std::cout << "Zahl mit der groessten Sequenz : " << longestSequenzIndex << std::endl;

    return 0;
}

