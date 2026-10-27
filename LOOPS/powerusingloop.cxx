#include<iostream>
using namespace std;
int main() {
    // int a , b;
    // cout<<"enter your base number : ";
    // cin>>a;
    // cout<<"enter your power number : ";
    // cin>>b;
    // int x = a ;
    // for(int i = 2 ; i<=b ; i++){
    //     a = a*x;
    // }
    // cout<<a;


    // method 2
    int a , b;
    cout<<"Enter base and power : ";
    cin>>a>>b;
    int x = a ;
    while(b!=1){
        a = a*x;
        b--;

    }
    cout<<a;
}