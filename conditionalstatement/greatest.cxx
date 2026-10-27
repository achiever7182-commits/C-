#include<iostream>
using namespace std;
int main() {
    int a , b , c ;
     cout<<"Enter your number : ";
     cin>>a;
     cout<<"Enter your number : ";
     cin>>b;
     cout<<"Enter your number : ";
     cin>>c;
             if(a>b){
                if(a>c)
                cout<<a<<" is greatest ";
                else cout<<c<<" is greatest ";
             }
             if(b>a){
                if(b>c)
                cout<<b<<" is greatest ";

                 else cout<<c<<" is greatest ";
                
             }
          
}