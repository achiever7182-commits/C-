#include<iostream>
using namespace std;
int main() {           // binary triangle
    int n,j=1,i ;
    cout<<"Enter your number : ";
    cin>>n;
   for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j<=i ; j++){
        if((i+j)%2==0){
            cout<<1;
        }
        else cout<<0;
    }
    cout<<endl;
   }
  
  
}