/* 
Applikation: banksimulator
Skapad av: Emelie Johansen
Skapad: 2021-12-05
Version: 1.0.0
*/

/*
Denna banksimulator simulerar en bank där användaren kan välja mellan fem olika funktioner.
Insättning, Uttag, Saldo, Räntebetalning och Avslut.

Programmet håller reda på saldot mellan de olika transaktionerna.

Räntebetalningen räknar ut hur många månader det tar innan ett önskat målsaldo uppnås
utifrån angiven ränta, aktuellt saldo och storlek på månadsinsättningen. 
*/

#include <iostream>
using namespace std;

int menyVal;

int main () {

     // Rensa skärmen
    cout << "\033[2J\033[1;1H";
    cout << "\n";

    // Skriv ut huvudmeny
    cout << "[I]nsättning\n\n";
    cout << "[U]ttag\n\n";
    cout << "[S]aldo\n\n";
    cout << "[R]äntebetalning\n\n";
    cout << "[A]vsluta\n\n";

    cout << "\n\nAnge menyval: ";
    cin >> menyVal;

    return 0;
}