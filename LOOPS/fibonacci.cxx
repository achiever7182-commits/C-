#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int f1 = 1;
    int f2 = 1;
     int fmain = 0;

     for(int i = 1 ; i<=n ;i++ ){
        fmain = f1 + f2;
         f1 = f2;
         f2  = fmain;
        
     }
     cout<<fmain;
    

}