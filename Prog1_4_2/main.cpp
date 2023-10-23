#include <iostream>

using namespace std;
//1.4.2 Napisz program wczytuj¹cy ze standardowego wejœcia dwie dodatnie
//liczby ca³kowite n i m, i wypisuj¹cy na standardowym wyjœciu
//m pierwszych wielokrotnoœci liczby n.

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
