#include<iostream>
using namespace std;
 
int main() {
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    int arr[n][m];
    for(int i = 0 ; i<n ; i++){
        for(int j= 0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
   int t[m][n];
    for(int j = 0 ; j<n ; j++){
        for(int i = 0 ; i<m ; i++){
            t[i][j]=arr[i][j] ;
        }
         
    }
    for(int j = 0 ; j<n ; j++){
        for(int i = 0 ; i<m ; i++){
           cout<<t[i][j]<<" " ;
        }
        cout<<endl; 
    }
    

}