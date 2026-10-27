#include<iostream>
using namespace std;
int main( ) {
    float a,b;
    int n ;
    cout<<"Enter 1. for addition 2.for subtraction 3.for multiplication 4. for division : ";
    cin>>n;
    switch(n) {
        case 1 :
        cout<<"Enter your first number : ";
        cin>>a;
         cout<<"Enter your second number : ";
        cin>>b;
        cout<<"sum of given numbers : "<<a+b;
        break;

        case 2: 
        cout<<"Enter your first number : ";
        cin>>a;
         cout<<"Enter your second number : ";
        cin>>b;
        cout<<"diffrence  of given numbers : "<<a-b;
         break;
        case 3:
        cout<<"Enter your first number : ";
        cin>>a;
         cout<<"Enter your second number : ";
        cin>>b;
        cout<<"product of given numbers : "<<a*b;
           break;
        case 4:
        cout<<"Enter your first number : ";
        cin>>a;
         cout<<"Enter your second number : ";
        cin>>b;
        cout<<"division of given numbers : "<<a/b;
         break; 
         default :
         cout<<"invalid number ";
    }
    

}