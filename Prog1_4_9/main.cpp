#include <iostream>

using namespace std;

//1.4.9 (r,!) Napisz program, kt�ry wczytuje ze standardowego wej�cia dodatnie
//liczby ca�kowite n i m, i wypisuje na standardowym wyj�ciu
//najwi�kszy wsp�lny dzielnik tych liczb.

unsigned int nwd(unsigned int m, unsigned int n)
{
    while(m!=n)
       if(m>n)
           m-=n;
       else
           n-=m;
    return m;
}

int main()
{
    unsigned int n;
    unsigned int m;
    cin >> n >> m;
    cout << nwd(m, n) << endl;
    return 0;
}
