#include<iostream>
using namespace std;
void sum(int sums ,int n){
    if(n==0) {
        cout<<sums; return;
    }
    sum(sums+n,n-1);
   
     
    

}

int main(){
    cout<<"Enter your  n : ";
    int n ;
    cin>>n;
    sum(0,n);

}