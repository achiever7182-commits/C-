#include<iostream>
using namespace std;
int main() {
    // using a third variable;
    int a , b ;
    cin>>a>>b;
    // int temp = a;
    // a = b;
    // b = temp;
    // cout<<a<<" "<<b;

    // without using third variable
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b;
}