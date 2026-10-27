#include<iostream>
using namespace std;
int main() {
    int a , d , n ;
    cout<<"Enter your first term of your AP : ";
    cin>>a;
      cout<<"Enter your  common diffrence  of your AP : ";
    cin>>d;
      cout<<"Enter your nth term of your AP : ";
    cin>>n;
    for(int i = a ; i<=(a+(n-1)*d);i=i+d){
        cout<<i<<endl;
    }
    
}