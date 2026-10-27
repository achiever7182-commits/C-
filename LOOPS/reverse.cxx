#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"Enter your number : ";
    cin>>n;
    int lastdigit = 0;
   
    while(n>0){
        lastdigit = n%10;
        n = n/10;
        cout<<lastdigit;
        
    }
}