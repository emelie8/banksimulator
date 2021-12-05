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
double insBelopp = 0, uttagsBelopp = 0;
double mIns, rSats;
int antalAr = 0;
double tempSaldo = 0, saldo = 0, malSaldo;

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
                cout << "\n\nAktuellt saldo är: ";
                cout << saldo;
                cout << "\n\nAnge belopp att sätta in: ";
                cin >> insBelopp; 
                saldo = saldo + insBelopp;
                cout << "\nDitt saldo är nu: ";
                cout << saldo;
                cout << "\n\nTryck 0 för att komma vidare\n";
                cin >> insBelopp;
                break;
            case 'U':
                cout << "\n\nAktuellt saldo är: ";
                cout << saldo;
                cout << "\n\nAnge belopp att ta ut: ";
                cin >> uttagsBelopp; 
                saldo = saldo - uttagsBelopp;
                cout << "\nDitt saldo är nu: ";
                cout << saldo;
                cout << "\n\nTryck 0 för att komma vidare\n";
                cin >> insBelopp;
                break;
            case 'S':
                cout << "\nDitt saldo är: ";
                cout << saldo;
                cout << "\n\nTryck 0 för att komma vidare\n";
                cin >> insBelopp;
                break;   
            case 'R':
                cout << "\nHur mycket pengar är ditt mål att ha på kontot?: ";
                cin >> malSaldo;
                cout << "\nHur mycket kan du sätta in varje månad?: ";
                cin >> mIns;
                cout << "\nAnge räntesats i procent: ";
                cin >> rSats;
                cout << "\nDitt nuvarande saldo är: ";
                cout << saldo;
                tempSaldo = saldo;
                while (tempSaldo < malSaldo) {
                        tempSaldo = (tempSaldo * (1 + rSats / 100) + (mIns * 12));
                        antalAr++;
                }
                cout << "\nDu kommer att uppnå ditt målsaldo efter " << antalAr << " år";
                cout << "\nDitt saldo efter " << antalAr << " år är " << tempSaldo;
                cout << "\n\nTryck 0 för att komma vidare\n";
                cin >> insBelopp;
                break;
            case 'A':
                cout << "\n\nTack för att du använde banksimulatorn!\n\n";
                return 0;   
            default:
                cout << "\n\nOgiltigt menyval! Försök igen";
                cout << "\n\nTryck 0 för att komma vidare\n";
                cin >> insBelopp;
                break;
                
            

        }
    }

    return 0;
}