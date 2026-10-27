#include<iostream>
using namespace std;
int main( ) {
    int n ;
    cout<<"Enter your number : ";
    cin>>n;
    bool flag;
    for(int i = 2 ; i<n ; i++){
        if(n%i==0){
            cout<<"composite";
            break;
        }
        else cout<<"prime";
        break;

    }
    
}