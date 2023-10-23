#include "Dzialanie.h"

Dzialanie::Dzialanie(string& dzialanie)
{
    parsuj(dzialanie);
}

void Dzialanie::parsuj(string& dzialanie)
{
    string::iterator it;
    string bufor;
    for(it = dzialanie.begin(); (it != dzialanie.end()&& (isdigit(*it) || *it=='.')); ++it) {
        bufor+=(*it);
    }
    arg1=stof(bufor);
    operacja=*it;
    it++;
    bufor="";
    for(it = it; (it != dzialanie.end()); ++it) {
        bufor+=(*it);
    }
    arg2=stof(bufor);
}

float Dzialanie::wylicz()
{
    switch(operacja)
    {
        case '+' : return arg1+arg2;
        case '-' : return arg1-arg2;
        case '*' : return arg1*arg2;
        case '/' : return arg1/arg2;
    }
    return 0;
}

Dzialanie::~Dzialanie()
{
    //dtor
}
