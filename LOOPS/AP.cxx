#include<iostream>
using namespace std;
int main() {
    // display this AP 1 3 5 7 9 ......2*n-1;
    int n ;
    cout<<"Enter your number n : ";
    cin>>n;
    for(int i = 1 ; i<=1+(n-1)*2 ; i = i+2){
        cout<<i<<endl;
    }
    
}