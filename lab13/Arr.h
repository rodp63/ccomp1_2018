#include <iostream>
#include <fstream>
using namespace std;

template<typename T>
class Arr
{
 public:
  Arr(){
    size = 0;
    data = new T[size];
  }
  Arr(int s){
    size = s;
    data = new T[size];
    for(int i=0; i<size; i++)
      data[i] = 0;
  }
  Arr(Arr &o){
    size = o.size;
    data = new T[size];
    for(int i=0; i<size; i++)
      data[i] = o.data[i];
  }
  ~Arr(){
    //delete[] data;
  }
  void push_back(T temp){
    resize(size+1);
    data[size-1] = temp;
  }
  void insert(T temp, int pos){
    resize(size+1);
    for(int i=size-1; i>pos; i--)
      data[i]=data[i-1];
    data[pos] = temp;
  }
  void erase(int pos){
    for(int i=pos; i<size-1; i++)
      data[i]=data[i+1];
    resize(size-1);
  }
  void print(){
    for(int i=0; i<size; i++)
      std::cout<<data[i]<<" ";
  }
  
  T* getdata(){return this->data;}
  int getsize(){return this->size;}
  
  //friend Arr<T> operator+ (const Arr<T> &a, const Arr<T> &b);
  //friend std::ostream& operator<< (std::ostream &output, const Arr<T> a);

  private:
  T* data;
  int size;
  void resize(int s){
    int temp = (s<size) ? s : size;
    T* t = new T[size];
    for(int i=0; i<temp; i++)
      t[i]=data[i];
    delete[] data;
    data = t;
    size = s;
  }
 
};

template<typename T>
Arr<T> operator+ (Arr<T> a, Arr<T> b){
  Arr<T> arr = a;
  T* t = b.getdata();
  for(int i=0; i<b.getsize(); i++)
    arr.push_back(t[i]);
  return arr;
}

template<typename T>
ostream& operator<< (ostream &output, Arr<T> a){
   T* temp = a.getdata();
   output<<"{ ";
   for(int i=0; i<a.getsize(); i++)
     output<<temp[i]<<" ";
   output<<"}";
   return output;
}

template<typename T>
void writefile(Arr<T> a){
    ofstream out ("out.txt", ofstream::binary);
    out<<a;
    out.close();
}
