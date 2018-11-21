#include <iostream>
#include "Point.h"
#include "Arr.h"
using namespace std;

int main(){

  //Declaracion
  Point<int> po1(2,3);
  Point<int> po2;
  po2.print();
  Arr<Point<int> > array(4);
  Arr<int> v;
  array.push_back(po1);
  v.push_back(10);
  array.print(); //solo para arr de Points
  
}

