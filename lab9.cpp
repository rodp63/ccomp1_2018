#include <iostream>
using namespace std;

bool asc(int a, int b){
  return a<b;
}
bool des(int a, int b){
  return b<a;
}

void sortArr(int arr[], int size, bool (*ptr)(int , int)){
  for(int i=0; i<size-1; i++){
    int ind = i;
    for(int j=i+1;j<size; j++){
      if((*ptr)(arr[j],arr[ind]))
	ind = j;
    }
    int c = arr[ind];
    arr[ind] = arr[i];
    arr[i] = c;
  }
}

int *giveNum(int x){
  int *p = new int;
  *p = x;
  return p;
}

int main(){

  //Puntero a funcion
  int arr[] = {2,1,4,5,1,2,7};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  sortArr(arr,size,des); //3er parametro nombre de una funcion
  
  for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
  cout<<endl;

  //New y Delete
  int *ptr = giveNum(10);
  cout<<*ptr<<endl;
  delete ptr;
  
  int n; cin>>n;
  int *v = new int[n];
  for(int i=0; i<n; i++) cin>>v[i];
  sortArr(v,n,des);
  for(int i=0; i<n; i++) cout<<v[i]<<" "; cout<<endl;
  

}
