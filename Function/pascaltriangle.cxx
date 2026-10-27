#include<iostream>
using namespace std;
int fact(int n ){
    int x = 1;
    for(int i = 1 ; i<=n ; i++){
        x = x*i;
    }
    return x;
}
int combination(int n , int r){
    int com = fact(n)/(fact(r)*fact(n-r));
    return com;
}
 int main() {
     int n ;
     cout<<"Enter number of rows : ";
     cin>>n;
         for(int i = 0 ; i<=n ; i++){
            
             
            for(int j = 0 ; j<=i ;j++  ){
                cout<<combination(i,j);
            }
            cout<<endl;
         }
     
 }