#include<iostream>
using namespace std;
int main() {
    int n , m;
    // first matrix A
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
    int arr[n][m];
   
     for(int i = 0 ;i<n ; i++){
        for(int j = 0 ;j<m ; j++){
           cin>>arr[i][j];
        }
    }
        // second matrix B
        cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
      int brr[n][m];
       for(int i = 0 ;i<n ; i++){
        for(int j = 0 ;j<m ; j++){
           cin>>brr[i][j];
        }
    }
    int sum[n][m];
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
             sum[i][j]=arr[i][j]+brr[i][j];
        }
    }
    
       for(int i = 0 ;i<n ; i++){
        for(int j = 0 ;j<m ; j++){
         cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

  

       
    
}