#include <iostream>
#include <unistd.h> // in Windows: #include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i=15; i>=0; i--)
    {
        sleep(1); // in Windows: Sleep(1000);
        system("clear") // in Windows: system("cls");
        cout << i << endl;
    }
    cout << "JEBUT!";

    return 0;
}
