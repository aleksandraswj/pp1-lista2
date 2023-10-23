#ifndef FIGURA_H
#define FIGURA_H


class Figura
{
    public:
        virtual ~Figura();
        float podajPole(){ return pole; }

    protected:
        float pole;
    private:
};

#endif // FIGURA_H
