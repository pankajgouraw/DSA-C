#include <iostream>
using namespace std;
main(){
    int n;
    cin>>n;
   int sum = 0;
    int i = 2;
    while(i<=n){
        sum = sum+i;
        i = i + 2;
    }

    cout << "sum of even number for given n :" << sum;

}