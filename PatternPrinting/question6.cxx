#include<iostream>
using namespace std;
int main() {
    int m , n ;
    cout<<"Enter your number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
   
    char ch = 'A' ;
   for(int i = 1 ; i<=m ; i++){
     
    for(int j = 1 ; j<=n ; j++){
        char m = ch + j -1 ;
        cout<<m;
        
    }
    cout<<endl;
   }


}