#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n to find the sum of n number :";
    cin>>n;
    int i=1;
    int sum =0;
    while(i<=n){
        sum = sum + i;
        i = i+1;
    }
    cout << "Sum of n numbers :" << sum;
}