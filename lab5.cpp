#include <iostream>
#define print for(int i=0;i<10;i++) cout<<arr[i]<<" "; cout<<endl;
using namespace std;

int sumRecArr(int arr[], int ind){
  if(ind==0)
    return arr[ind];
  return arr[ind] + sumRecArr(arr,ind-1);
      
}

void invRecArr(int arr[], int i){
  if(i>4)
    return;
  int j = 10-i-1;
  int temp = arr[j];
  arr[j] = arr[i];
  arr[i] = temp;
  invRecArr(arr,i+1);
}

int main(){

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int suma = sumRecArr(arr,9);
  invRecArr(arr,0);
  print;
  cout<<suma<<endl;

}
