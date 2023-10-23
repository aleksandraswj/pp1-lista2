#include <iostream>

using namespace std;

//1.4.9 (r,!) Napisz program, który wczytuje ze standardowego wejœcia dodatnie
//liczby ca³kowite n i m, i wypisuje na standardowym wyjœciu
//najwiêkszy wspólny dzielnik tych liczb.

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
