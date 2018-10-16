#include <iostream>
using namespace std;
#define PRINT(x) cout<<x<<endl;
#define FORN(i,n) for(int i=0; i<n; i++)
#define PRINTARR(arr,size) FORN(i,size) cout<<arr[i]<<" "; cout<<endl;

int suma(int *arr, const int size){
  int sum = 0;
  for(int i=0; i<size; i++)
    sum += *(arr+i);
  return sum;
}

void invertir(int *arr, const int size){
  int *ptr = arr+size-1;
  while(ptr>arr){
    int temp = *ptr;
    *ptr-- = *arr;
    *arr++ = temp;
  }
}

void bubble (int *arr, const int size){
  FORN(i,size-1){
    for(int j=1; j<size-i; j++){
      if(*arr>*(arr+j)){
	int c = *(arr+j);
	*(arr+j) = *arr;
	*arr = c;
      }
    }
    arr++;
  }
}

int main(){

  int arr[] = {1,10,9,4,6,12,4};
  const int size = sizeof arr / sizeof arr[0];
  //sumar
  PRINT(suma(arr,size));
  //ordenar
  bubble(arr,size);
  PRINTARR(arr,size);

}
