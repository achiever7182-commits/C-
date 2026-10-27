#include<iostream>
using namespace std;
int main() {
    int x , y;
    cout<<"Enter your numbers : ";
    cin>>x>>y;
    int *p = &x;
    int *q = &y;
    cout<<"sum of given number is : "<<*p+*q;

}