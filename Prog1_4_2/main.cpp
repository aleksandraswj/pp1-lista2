#include <iostream>

using namespace std;
//1.4.2 Napisz program wczytuj�cy ze standardowego wej�cia dwie dodatnie
//liczby ca�kowite n i m, i wypisuj�cy na standardowym wyj�ciu
//m pierwszych wielokrotno�ci liczby n.

int main()
{
    unsigned int n;
    unsigned int m;
    cin >> n >> m;
    for(unsigned int i=1; i<=m ; i++)
    {
        cout << n*i << endl;
    }
    return 0;
}
