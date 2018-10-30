#include <iostream>
#define PRINTVEC(v,size,x,y) for(int i=0; i<size; i++) cout<<v[i].x<<" "<<v[i].y<<endl;
using namespace std;


class Point{
public:
  double x,y;
};
class Person{
public:
  char *name;
  int id;
};

bool xSort(Point a, Point b){
  return a.x<b.x;
}
bool ySort(Point a, Point b){
  return a.y<b.y;
}

void sortPoint(Point arr[], int size, bool (*p)(Point,Point)){
  for(int i=0; i<size-1; i++){
    int mini = i;
    for(int j=i+1; j<size; j++){
      if((*p)(arr[j],arr[mini]))
	mini = j;
    }
    Point temp = arr[i];
    arr[i] = arr[mini];
    arr[mini] = temp;
  }
}

int main(){
  /*
  //Ordenar puntos
  int size; cin>>size;
  Point *arr = new Point[size];
  for(int i=0; i<size; i++){
    cin>>arr[i].x;
    cin>>arr[i].y;
  }
  sortPoint(arr,size,ySort);
  cout<<"Sort:"<<endl;
  PRINTVEC(arr,size,x,y);
  delete[] arr;
  */

  //Ordenar personas
  Person arr[3];
  arr[0].name = "Juan"; arr[0].id = 1;
  arr[1].name = "Pedro"; arr[1].id = 2;
  arr[2].name = "Alex"; arr[2].id = 3;
  
}
