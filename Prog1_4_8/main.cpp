#include <iostream>

using namespace std;
//1.4.8 (*,r) Napisz program, kt�ry wczytuje ze standardowego wej�cia nieujemn�
//liczb� ca�kowit� n i wypisuje na standardowym wyj�ciu element
//ci�gu Fibonacciego o indeksie n.

unsigned int fibonacci(unsigned int n){
  if (n==0)
  {
      return 0;
  } else if (n==1)
  {
      return 1;
  } else
  {
      return fibonacci(n-1)+fibonacci(n-2);
  }
}

int main()
{
    unsigned int n;
    cin >> n ;
    cout << fibonacci(n) << endl;
    return 0;
}
