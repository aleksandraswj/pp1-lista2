#include <iostream>

using namespace std;
//1.4.1 (r,!) Napisz program wczytuj¹cy ze standardowego wejœcia dwie dodatnie
//liczby ca³kowite n i m, i wypisuj¹cy w kolejnych wierszach
//na standardowym wyjœciu wszystkie dodatnie wielokrotnoœci n mniejsze
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
