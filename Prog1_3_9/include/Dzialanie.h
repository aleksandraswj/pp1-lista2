#ifndef DZIALANIE_H
#define DZIALANIE_H
#include <string>
using namespace std;


class Dzialanie
{
    public:
        Dzialanie(string& dzialanie);
        virtual ~Dzialanie();
        float wylicz();
    protected:

    private:
        void parsuj(string& dzialanie);
        float arg1;
        float arg2;
        char operacja;
};

#endif // DZIALANIE_H
