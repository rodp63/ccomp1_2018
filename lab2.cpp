#include <iostream>
using namespace std;
int main(){
  /*
  //Problema 1
  char a;
  cin>>a;
  int temp = static_cast<int>(a);
  if((temp>64 && temp<91) || (temp>96 && temp<123)){
    cout<<"Es letra"<<endl;
  }
  else{
    if(temp>47 && temp<58){
      cout<<"Es un numero"<<endl;
    }
    else{
      cout<<"No es nada"<<endl;
    }
  }

  //Problema 2
  char b;
  cin>>a>>b;
  cout<<(a-48)+(b-48)<<endl;

  //Problema 3
  cin>>a;
  temp = static_cast<int>(a);
  if(temp>96 && temp<123){
    cout<<static_cast<char>(a-32)<<endl;
  }*/

  //Problema 4
  int n;
  cin>>n;
  if(n%4==0){
    if(n%100==0 && n%400!=0){
      cout<<"No es bisiesto"<<endl;
    }
    else{
      cout<<"Es bisiesto"<<endl;
    } 
  }
  else{
    cout<<"No es bisiesto"<<endl;
  }  
 
}
