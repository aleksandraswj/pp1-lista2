#include <iostream>

using namespace std;

//1.4.10 (r,!) Napisz program, który wczytuje ze standardowego wejścia nieujemną
//liczbę n i wypisuje na standardowym wyjściu wartość ⌊√n⌋
//(wartość √n zaokrągloną w dół do najbliższej wartości całkowitoliczbowej).
//Program napisz bez użycia funkcji z biblioteki matematycznej.

unsigned int pierwiastek(unsigned int n)
{
    unsigned int i;
    for (i=1; i*i<=n; i++);
    return i-1;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << pierwiastek(n) << endl;
    return 0;
}
