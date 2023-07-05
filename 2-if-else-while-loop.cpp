#include <iostream>
using namespace std;

int main(){
  int x;
  cout << "Type a number: "; 
  cin >> x; 

  if(x==4){
    cout<<true;
  }else{
    cout<<false;
  }
   int a,b;
   cin>>a>>b;
   cout<<"a :"<< a << "b :" << b;
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    cout<< i << " ";
    i = i+1;
  }

}