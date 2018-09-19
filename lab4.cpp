#include<iostream>
#include<math.h>
using namespace std;

bool prime(int x){
  bool temp = true;
  for(int i=2; i<=sqrt(x); i++){
    if(!(x%i)){
      temp = false; break;
    }
  }
  return temp;
}

int sumaArr(int arr[],int size){
  int suma = 0;
  for(int i=0; i<size; i++) suma+=arr[i];
  return suma;
}

int mayArr(int arr[], int size){
  int may = arr[0];
  for(int i=1; i<size; i++){
    if(arr[i]>may) may=arr[i];
  }
  return may;
}

int primosArr(int arr[], int size){
  int cont = 0;
  for(int i=0; i<size; i++){
    if(prime(arr[i])) cont++;
  }
  return cont;
}

void sortArr(int arr[], int size, int type){
  for(int i=0; i<size-1; i++){
    int ind = i;
    for(int j=i+1;j<size; j++){
      if(type){
	if(arr[j]>arr[ind])
	  ind = j;
      }
      else{
	if(arr[j]<arr[ind])
	  ind = j;
      }	  
    }
    int c = arr[ind];
    arr[ind] = arr[i];
    arr[i] = c;
  }
}

void inverArr(int arr[], int size){
  for(int i=0; i<(size/2); i++){
    int temp = arr[size-1-i];
    arr[size-1-i] = arr[i];
    arr[i] = temp;
  }
}
      

int main(){

  int arr[] = {2,4,12,5,6,7,2,10,3,15};
  int respuesta = mayArr(arr,10);
  //cout<<respuesta<<endl;
  inverArr(arr,10); //type 0=asc, 1=des
  for(int i=0; i<10; i++)
    cout<<arr[i]<<" ";
  cout<<endl;

}
