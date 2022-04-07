// Project_Euler_15.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

// Lattice paths


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const long long GridSize = 10;

    /*
        Generieren eines "Paskalschen Dreiecks" der Größe 20x20
        Horizontal = n
        Vertikal = k 

        Feld Inhalt gibt Möglichkeiten der Wege an. 
    */
    long long Grid[GridSize + 1][GridSize + 1];

    for (int i = 0; i < (GridSize + 1); i++) {
        // Horizontale erste Reihe mit Einsen befüllen
        Grid[0][i] = 1;
        //Vertikale erste Spalte mit Einsen befüllen
        Grid[i][0] = 1;
    }

    for (int i = 1; i < (GridSize + 1); i++) {
        for (int j = 1; j < (GridSize + 1); j++) {
            Grid[i][j] = Grid[i - 1][j] + Grid[i][j - 1];
        }
    }

    for (int i = 0; i < (GridSize + 1); i++) {
        for (int j = 0; j < (GridSize + 1); j++) {
            cout << Grid[i][j] << "   ";
        }
        cout << endl;
    }

    cout << endl << "Die Anzahl der Möglichen Pfade durch ein " << GridSize << " x " << GridSize << " Feld ist: " << Grid[GridSize][GridSize] << endl;
}

