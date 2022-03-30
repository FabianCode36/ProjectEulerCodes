// Project_Euler_4.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

// Largest palindrome product

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

vector<int>Palindrome;


bool isPalindrome(const int Number) {
    string NumberAsString = to_string(Number);
    if (NumberAsString.length() != 6) {
        return false;
    }
    if (NumberAsString[0] != NumberAsString[5])
        return false;
    if (NumberAsString[1] != NumberAsString[4])
        return false;
    if (NumberAsString[2] != NumberAsString[3])
        return false;

    return true;
}

int LargestPalindromeProduct() {
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int val = i * j;

            if (isPalindrome(val)) {
                Palindrome.push_back(val);
            }
        }
    }

    sort(Palindrome.begin(), Palindrome.end(), std::greater<int>());
    if (Palindrome.empty()) {
        return -1;
    }
    return Palindrome.at(0);
}

int main()
{   
    cout << "Das groesste Palindrom, das aus dem Produkt zweier dreistelliger Zahlen besteht ist : " << LargestPalindromeProduct() << endl;
}


