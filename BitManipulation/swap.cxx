#include<iostream>
using namespace std;
int main() {
    int a , b;
    cout<<"Enter your a and b : ";
    cin>>a>>b;
    a = a^b;
    b = a^b;
    a = (a^b);
    cout<<a<<" "<<b;
}