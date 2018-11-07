#include "PolyArr.h"

PolyArr::PolyArr()
{
    data = new Polygon[0];
    size = 0;
}

PolyArr::PolyArr(int tam)
{
    data = new Polygon[tam];
    size = tam;
}

PolyArr::PolyArr(PolyArr &o)
{
    size = o.size;
    data = new Polygon[size];
    for(int i=0; i<size; i++){
        data[i]=o.data[i];
    }
}

PolyArr::~PolyArr()
{
    delete[] data;
}

void PolyArr::resize(int tam)
{
    int temp = (tam>size) ? size : tam;
    Polygon* t = new Polygon[tam];
    for(int i=0; i<temp; i++){
        t[i]=data[i];
    }
    delete[] data;
    data = t;
    size = tam;
}

void PolyArr::push_back(Polygon e)
{
    resize(size+1);
    data[size-1]=e;
}

void PolyArr::insert(Polygon e, int ind)
{
    resize(size+1);
    for(int i=size-1; i>ind; i--){
        data[i]=data[i-1];
    }
    data[ind]=e;
}

void PolyArr::erase(int ind)
{
    for(int i=ind; i<size-1; i++){
        data[i]=data[i+1];
    }
    resize(size-1);
}

void PolyArr::print()
{
  for(int i=0; i<size; i++)
    data[i].printvalues();
}
    




