#include<iostream>
using namespace std;
int main() {
    // int n ,i;
    // cout<<"Enter your number : ";
    // cin>>n;
    // int a = n;
    // for( i = 1 ; i<=n/2 ; i++){
    //     a = a/10;
    //     if(a==0) break;


    // }
    // cout<<i;
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
        
    }
    cout<<count;


}