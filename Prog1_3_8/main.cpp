#include <iostream>
#include <math.h>
#include <Kwadrat.h>
#include <Trojkat.h>
#include <Prostokat.h>

using namespace std;

//1.3.8 (r) Napisz program, który w zale¿noœci od wyboru u¿ytkownika wczytuje
//ze standardowego wejœcia wymiary: kwadratu, prostok¹ta lub trójk¹ta i wypisuje na standardowym wyjœciu pole figury o wczytanych
//wymiarach.


const string prompt = "1. Podaj bok kwadratu;   2. Podaj boki prostokata; 3. Podaj boki trojkata";

void obliczPoleKwadratu(){
    float a;
    cin >> a;
    Kwadrat kwadrat (a);
    cout << kwadrat.podajPole();
}

void obliczPoleProstokata(){
    float a;
    float b;
    cin >> a >> b;
    Prostokat prostokat (a, b);
    cout << prostokat.podajPole();
}

void obliczPoleTrojkata(){
    float a;
    float b;
    float c;
    cin >> a >> b >> c ;
    Trojkat trojkat (a, b, c);
    cout << trojkat.podajPole();
}
int main()
{
     int wybor;
    cout << prompt << endl;
    cin >> wybor;
    if (wybor==1)
    {
        obliczPoleKwadratu();
    }
    else if (wybor==2)
    {
        obliczPoleProstokata();
    }
    else if (wybor==3)
    {
        obliczPoleTrojkata();
    }
    return 0;
}
