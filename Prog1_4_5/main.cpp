#include <iostream>

using namespace std;

//1.4.5 Napisz program, kt�ry wczytuje ze standardowego wej�cia nieujemn�
//liczb� ca�kowit� n i wypisuje na standardowym wyj�ciu sum� kwadrat�w
//liczb od 0 do n, czyli warto�� 02 + 12 + 32 + ... + n2.

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
