#include <iostream>
#include <Dzialanie.h>

using namespace std;
//1.3.9 Napisz program kalkulator, kt�ry wykonuje wybran� przez u�ytkownika
//operacj� arytmetyczn� na dw�ch wczytanych liczbach. Program
//powinien wczytywa� dane ze standardowego wej�cia i wypisywa� wynik
//na standardowym wyj�ciu.

int main()
{
    string wprowadzonyTekst;

    cout << "podaj dzialanie np. 3.5*4.1" << endl;
    cin >> wprowadzonyTekst;
    Dzialanie dzialanie(wprowadzonyTekst);
    cout << dzialanie.wylicz();

    return 0;
}

