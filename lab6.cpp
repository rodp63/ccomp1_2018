#include <iostream>
using namespace std;

bool primo(int *ptr){
    for(int j=2; j<*ptr; j++){
      if(*ptr%j==0){
	return false;
      }
    }
    if(*ptr<2) return false;
    return true;
}

bool bis(int *ptr){
  //return !(*ptr%4) ? (!(*ptr%100) && (*ptr%400) ? false : true ) : false;
  return !(*ptr%400) || (!(*ptr%4) && *ptr%100);
}

int main(){

  int a;
  cin>>a;
  int *ptr = &a;
  //Bisiesto
  if (bis(ptr)) cout<<"Si es"<<endl;
  else cout<<"No es"<<endl;
  //Primo
  if (primo(ptr)) cout<<"Si es"<<endl;
  else cout<<"No es"<<endl;
  //Array
  int arr[] = {2,1,4,5,3};
  int *p = arr;

}
