#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define PRINT(x) cout<<x<<endl;
#define FORN(i,n) for(int i=0; i<n; i++)

int mult(int a, int b){
  return a*b;
}

int res(int a, int b){
  return a-b;
}

int main(){

  int (*pta)(int,int);
  int x; cin>>x;
  int *arr = new int[x];
  FORN(i,x){
    cin>>arr[i];
  }
  FORN(i,x){
    PRINT(arr[i]);
  }
  
}
