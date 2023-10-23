#include <iostream>

using namespace std;

//1.4.4 (r) Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹
//liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu liczbê
//n!.

unsigned int silnia(unsigned int n)
{
    unsigned int wynik=1;
    for (unsigned int i=1; i<=n; i++)
    {
        wynik*=i;
    }
    return wynik;
}

unsigned int silniaRek(unsigned int n){
    return n==0 ? 1 : n*(silniaRek(n-1));
}

int main()
{
    unsigned int n;
    cin >> n ;
    cout << silnia(n) << endl;
    return 0;
}
