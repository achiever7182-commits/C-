#include<iostream>
using namespace std;
int main( ) {
    int n ;
    cout<<"Enter your number : ";
    cin>>n;
    int sum = 0;
    for(int i = 1 ; i<=n ; i++){
        sum = sum + n%10;
       n = n/10;
        }
    cout<<sum;
            
             

            
   
}