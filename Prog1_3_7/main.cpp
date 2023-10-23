#include <iostream>
#include <RownanieKwadratowe.h>
using namespace std;

//1.3.7 Napisz program, kt�ry wczytuje ze standardowego wej�cia wsp�czynniki
//r�wnania kwadratowego z jedn� niewiadom� i wypisuje na standardowym
//wyj�ciu wszystkie rozwi�zania rzeczywiste tego r�wnania
//lub odpowiedni� informacj� w przypadku braku rozwi�za�.

int main()
{
    float a;
    float b;
    float c;

    cout << "podaj wspolczynniki rownania" <<endl;
    cin >> a >> b >> c;

    RownanieKwadratowe rownanieKwadratowe (a, b, c);
    switch (rownanieKwadratowe.podajTypRozwiazania())
    {
        case BrakRozwiazan                  : cout << "Brak rozwiazan" << endl;
                                              break;
        case JednoRozwiazanie               : cout << "x1=" << rownanieKwadratowe.podajX1() << endl;
                                              break;
        case DwaRozwiazania                 : cout << "x1=" << rownanieKwadratowe.podajX1() << " x2=" << rownanieKwadratowe.podajX2() << endl;
                                              break;
    }
    return 0;
}
