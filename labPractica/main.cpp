#include <iostream>
#include "PolyArr.h"
using namespace std;

int main(){

    //Problema 1
    Rectangle rec(2,4);
    Triangle tri(5,7);
    Circle cir(5);

    cout<<"Rec area: "; rec.printarea();
    cout<<"Tri area: ";tri.printarea();
    cout<<"Cir area: ";cir.printarea();

    Polygon* ptrrec;
    Polygon* ptrtri;
    Polygon* ptrcir;
    ptrrec = new Rectangle(6,8);
    ptrtri = new Triangle(4,10);
    ptrcir = new Circle(7);

    cout<<"Ptrrec area: ";ptrrec->printarea();
    cout<<"Ptrtri area: ";ptrtri->printarea();
    cout<<"Ptrcir area: ";ptrcir->printarea();


    //Problema 2
    
    PolyArr arr3;
    PolyArr arr2(5);
    PolyArr arr = arr2;

    Polygon temp(2,3);
    arr.push_back(temp);
    arr.insert(temp,2);
    arr.erase(1);
    arr.print();    

}
