#include <iostream>

using namespace std;
//1.4.1 (r,!) Napisz program wczytujący ze standardowego wejścia dwie dodatnie
//liczby całkowite n i m, i wypisujący w kolejnych wierszach
//na standardowym wyjściu wszystkie dodatnie wielokrotności n mniejsze
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
