#include <iostream>

using namespace std;
//1.4.3 Napisz program wczytuj�cy ze standardowego wej�cia trzy dodatnie
//liczby ca�kowite n, m i k, i wypisuj�cy w kolejnych wierszach wszystkie
//wielokrotno�ci n wi�ksze od m i mniejsze od k.

int main()
{
    unsigned int n;
    unsigned int m;
    unsigned int k;
    cin >> n >> m >>k;
    for(unsigned int i=m/n+1; n*i<k; i++)
    {
        cout << i*n << endl;
    }
    return 0;
}
