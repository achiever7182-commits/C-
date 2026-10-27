#include<iostream>
using namespace std;
int main() {
    cout<<"Enter your number : ";
    int n ;
    cin>>n;
    if(n%5==0 and n%3==0){
        cout<<"divisible by 5 and 3 ";
    }
    else 
      cout<<"not divisible by 5 and 3";
}