#include <iostream>

using namespace std;

//1.4.6 Napisz program, który wczytuje ze standardowego wejścia liczbę całkowitą
//n (n > 2) i wypisuje na standardowym wyjściu iloczyn liczb
//parzystych z zakresu od 2 do n (czyli 2 ∗ 4 ∗ . . . ∗ n dla n parzystych
//i 2 ∗ 4 ∗ . . . ∗ (n − 1) w przeciwnym wypadku).

unsigned int iloczynParzystych(unsigned int n)
{
    unsigned int wynik=1;
    for (unsigned int i=2; i<=n; i+=2)
    {
        wynik*=i;
    }
    return wynik;
}

int main()
{
    unsigned int n;
    cin >> n ;
    cout << iloczynParzystych(n) << endl;
    return 0;
}
