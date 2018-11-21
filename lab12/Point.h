#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;

template<typename T>
class Point
{
 public:
  Point(){
    x=0;
    y=0;
  }
  Point(T _x, T _y){
    x = _x;
    y = _y;
  }
  void print(){
    cout<<x<<" "<<y<<endl;
  }
  
 private:
  T x,y;
};

#endif
