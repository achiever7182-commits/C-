#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i = n ; i>=1 ; i--){    // n = 3
        for(int j = 1 ; j<=i ; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}