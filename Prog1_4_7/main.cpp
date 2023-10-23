#include <iostream>

using namespace std;

//1.4.7 Napisz program, który wczytuje ze standardowego wejścia dwie liczby
//całkowite n i m (zakładamy, że n < m) i wypisuje na standardowym
//wyjściu liczbę n ∗ . . . ∗ m.

unsigned int silniaWZakresie(unsigned int m, unsigned int n)
{
    unsigned int wynik=1;
    for (unsigned int i=n; i<=m; i++)
    {
        wynik*=i;
    }
    return wynik;
}

int main()
{
    unsigned int n;
    unsigned int m;
    cin >> n >> m;
    cout << silniaWZakresie(m, n) << endl;
    return 0;
}
