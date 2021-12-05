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

char menyVal;
int insBelopp = 0, saldo = 0, uttagsBelopp = 0;

int main () {

    // While loop för att hantera huvudmenyn
    while (menyVal != 'A') {
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

        switch (menyVal) {
            case 'I':
                cout << "\n\nAnge belopp att sätta in: ";
                cin >> insBelopp; 
                saldo = saldo + insBelopp;
                cout << "\nDitt saldo är nu: ";
                cout << saldo;
                cout << "\n\nTryck 0 för att komma vidare\n";
                cin >> insBelopp;
                break;
            case 'U':
                cout << "\n\nAnge belopp att ta ut: ";
                cin >> uttagsBelopp; 
                saldo = saldo - uttagsBelopp;
                cout << "\nDitt saldo är nu: ";
                cout << saldo;
                cout << "\n\nTryck 0 för att komma vidare\n";
                cin >> insBelopp;
                break;
            

        }
    }

    return 0;
}