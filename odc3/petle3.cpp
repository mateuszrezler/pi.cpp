#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 15; i >= 0; i--)
    {
        system("clear");
        cout << i << endl;
        sleep(1);
    }

    cout << "JEBUT\n";

    return 0;
}

