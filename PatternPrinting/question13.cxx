#include<iostream>  // floyd's triangle 
using namespace std;
int main() {
    int n ;
    cout<<"Enter your n : ";
    cin>>n;
    char k = 64 ;
     for(int i = 1 ; i<=3 ; i++){
        for(int j = 1 ; j<=i ; j++){
            k = k +1;
            cout<<k;

        }
        cout<<endl;
     }
}