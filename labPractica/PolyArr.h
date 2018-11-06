#ifndef POLYARR_H
#define POLYARR_H
#include "Polygon.h"

class PolyArr
{
    public:
        PolyArr();
        PolyArr(int tam);
        PolyArr(PolyArr &o);
        ~PolyArr();
        void push_back(Polygon e);
        void insert(Polygon e, int ind);
        void erase(int ind);
        void print();

    private:
        void resize(int tam);
        int size;
        Polygon* data;
};

#endif // POLYARR_H
