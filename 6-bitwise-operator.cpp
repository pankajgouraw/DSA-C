#include <iostream>
using namespace std;

int main(){
    int a =5;
    int b=6;

    cout<<"a&b " << (a&b) << endl;
    cout<<"a|b " << (a|b) << endl;
    cout<<"~b " << (~b) << endl;
    cout<<"a^b " << (a^b) << endl;

    int i =8;

    cout << (i++) << endl;
    cout << (++i) << endl;
    cout << (i--) << endl;
    cout << (i++) << endl;
}