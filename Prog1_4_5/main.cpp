#include <iostream>

using namespace std;

//1.4.5 Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹
//liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu sumê kwadratów
//liczb od 0 do n, czyli wartoœæ 02 + 12 + 32 + ... + n2.

unsigned int sumaKwadratow(unsigned int n)
{
    unsigned int wynik=0;
    for (unsigned int i=1; i<=n; i++)
    {
        wynik+=i*i;
    }
    return wynik;
}

int main()
{
    unsigned int n;
    cin >> n ;
    cout << sumaKwadratow(n) << endl;
    return 0;
}
