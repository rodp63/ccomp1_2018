#include <iostream>
#include <math.h>
using namespace std;

void intercambio (int &a, int &b){
  /*int temp = a;
  a = b;
  b = temp;*/
  a ^= b;
  b ^= a;
  a ^= b;
}

bool esPotencia(int n){
  return !(n & (n-1));
}

long long factorial(long long n){
  if(n==1)
    return 1;
  return n * factorial(n-1);
}

int main(){
  
  int a,b;
  cin>>a>>b;
  intercambio(a,b);
  cout<<a<<" "<<b<<endl;

  cout<<esPotencia(a)<<endl;
  
  long long n;
  cin>>n;
  cout<<factorial(n)<<endl;

}
