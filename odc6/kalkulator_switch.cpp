#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

float x, y;
int wybor;

int main()
{
    for(;;)
    {
        cout << "Podaj 1. liczbe: ";
        cin >> x;
        cout << "Podaj 2. liczbe: ";
        cin >> y;

        cout<<endl;
        cout << "MENU GLOWNE\n";
        cout << "-----------------\n";
        cout << "1. Dodawanie\n";
        cout << "2. Odejmowanie\n";
        cout << "3. Mnozenie\n";
        cout << "4. Dzielenie\n";
        cout << "5. Koniec programu\n";
        cout << "Wybierz: ";
        cin >> wybor;

        switch (wybor)
        {
            case 1:
                cout << "Suma = " << x+y << endl;
            break;

            case 2:
                cout << "Roznica = " << x-y << endl;
            break;

            case 3:
                cout << "Iloczyn = " << x*y << endl;
            break;

            case 4:
                if (y == 0) cout << "Nie dzielimy przez zero!\n";
                else cout << "Iloraz = " << x/y << endl;
            break;

            case 5:
                exit(0);
            break;

            default: cout << "Nie ma takiej opcji w menu!";
        }

    getchar();
    getchar();
    system("clear");
    }

    return 0;
}

