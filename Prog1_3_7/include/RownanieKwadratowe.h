#ifndef ROWNANIEKWADRATOWE_H
#define ROWNANIEKWADRATOWE_H
enum TypRozwiazania{
    BrakRozwiazan,
    JednoRozwiazanie,
    DwaRozwiazania
};

class RownanieKwadratowe
{
    public:
        RownanieKwadratowe(float a, float b, float c);
        virtual ~RownanieKwadratowe();
        float podajX1(){ return x1; }
        float podajX2() { return x2; }
        TypRozwiazania podajTypRozwiazania () { return typRozwiazania; }

    protected:

    private:
        float a;
        float b;
        float c;
        float x1;
        float x2;
        TypRozwiazania typRozwiazania;
        void Rozwiaz();

};

#endif // ROWNANIEKWADRATOWE_H
