#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w naszym banku!\n";
    cout << "Podaj numer PIN: ";
    cin >> PIN;

    if (PIN == "1729")
    {
        cout << "Poprawny PIN.\n";
    }
    else
    {
        cout << "Niepoprawny PIN.\n";
    }

    return 0;
}

