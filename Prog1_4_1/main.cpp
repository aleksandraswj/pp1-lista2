#include <iostream>

using namespace std;
//1.4.1 (r,!) Napisz program wczytuj�cy ze standardowego wej�cia dwie dodatnie
//liczby ca�kowite n i m, i wypisuj�cy w kolejnych wierszach
//na standardowym wyj�ciu wszystkie dodatnie wielokrotno�ci n mniejsze
//od m.

int main()
{
    unsigned int n;
    unsigned int m;
    cin >> n >> m;
    for(unsigned int i=1; n*i<m; i++)
    {
        cout << n*i << endl;
    }
    return 0;
}
