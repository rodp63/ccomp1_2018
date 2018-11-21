#include <iostream>
#include "Arr.h"
using namespace std;

int main(){

  Arr<int> array(10);
  array.push_back(2);
  Arr<int> arr2(5);
  arr2.push_back(3);
  Arr<int> temp;
  
  temp = (array+arr2);
  cout<<temp<<endl;
  writefile(temp);
  
}

