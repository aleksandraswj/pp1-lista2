#include <iostream>

using namespace std;
//1.4.3 Napisz program wczytuj¹cy ze standardowego wejœcia trzy dodatnie
//liczby ca³kowite n, m i k, i wypisuj¹cy w kolejnych wierszach wszystkie
//wielokrotnoœci n wiêksze od m i mniejsze od k.

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
