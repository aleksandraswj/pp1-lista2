#include <iostream>

using namespace std;
//1.4.3 Napisz program wczytujący ze standardowego wejścia trzy dodatnie
//liczby całkowite n, m i k, i wypisujący w kolejnych wierszach wszystkie
//wielokrotności n większe od m i mniejsze od k.

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
