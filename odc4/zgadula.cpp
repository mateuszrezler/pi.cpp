#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba, strzal, ile_prob = 0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe od 1 do 100...\n";
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal != liczba)
    {
      ile_prob++;
      cout << "Zgadnij jaka (to Twoja " << ile_prob << " proba): ";
      cin >> strzal;

      if (strzal == liczba)
          cout << "Udalo sie! Wygrywasz w " << ile_prob << " probie.\n";
      else if (strzal < liczba)
          cout << "To za malo...\n";
      else if (strzal > liczba)
          cout << "To za duzo...\n";
    }

    return 0;
}

