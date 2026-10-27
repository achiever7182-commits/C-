#include<iostream>
using namespace std;
int fib(int n ){
    if(n==1 or n==2){
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2);
    }

}
int main() {
    int n ;
    cout<<"Enter your  terms : ";
    cin>>n;
    cout<<fib(n);
}