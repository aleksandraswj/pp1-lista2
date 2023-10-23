#include "RownanieKwadratowe.h"
#include "math.h"

RownanieKwadratowe::RownanieKwadratowe (float a, float b, float c)
{
    this->a = a;
    this->b = b;
    this->c = c;
    Rozwiaz();
}
void RownanieKwadratowe::Rozwiaz()
{
    float delta = b*b - (4*a*c);
    if (delta < 0)
    {
        typRozwiazania = BrakRozwiazan;
    }
    else if (delta == 0)
    {
        typRozwiazania = JednoRozwiazanie;
        x1 =(-b)/(2*a);
    }
    else
    {
        typRozwiazania = DwaRozwiazania;
        x1 = ((-b)+ sqrt (delta))/(2*a);
        x2 = ((-b)- sqrt (delta))/(2*a);

    }
}
RownanieKwadratowe::~RownanieKwadratowe()
{
    //dtor
}
