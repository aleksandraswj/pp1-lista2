#include <iostream>
#include <RownanieKwadratowe.h>
using namespace std;

//1.3.7 Napisz program, który wczytuje ze standardowego wejœcia wspó³czynniki
//równania kwadratowego z jedn¹ niewiadom¹ i wypisuje na standardowym
//wyjœciu wszystkie rozwi¹zania rzeczywiste tego równania
//lub odpowiedni¹ informacjê w przypadku braku rozwi¹zañ.

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
