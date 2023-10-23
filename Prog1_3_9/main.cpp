#include <iostream>
#include <Dzialanie.h>

using namespace std;
//1.3.9 Napisz program kalkulator, który wykonuje wybran¹ przez u¿ytkownika
//operacj¹ arytmetyczn¹ na dwóch wczytanych liczbach. Program
//powinien wczytywaæ dane ze standardowego wejœcia i wypisywaæ wynik
//na standardowym wyjœciu.

int main()
{
    string wprowadzonyTekst;

    cout << "podaj dzialanie np. 3.5*4.1" << endl;
    cin >> wprowadzonyTekst;
    Dzialanie dzialanie(wprowadzonyTekst);
    cout << dzialanie.wylicz();

    return 0;
}

