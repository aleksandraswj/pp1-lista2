#include <iostream>

using namespace std;
//1.4.2 Napisz program wczytujący ze standardowego wejścia dwie dodatnie
//liczby całkowite n i m, i wypisujący na standardowym wyjściu
//m pierwszych wielokrotności liczby n.

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
