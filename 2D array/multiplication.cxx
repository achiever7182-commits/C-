#include<iostream>
using namespace std;
int main() {
    int m , n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    int p , q;
    cout<<"Enter number of rows 2nd matrix : ";
    cin>>p;
    cout<<"Enter number of columns 2nd matrix : ";
    cin>>q;
  if(n==p){
        // first matrix
        cout<<"Enter elements of first matrix : "<<endl;
    int arr[m][n];
     for(int i = 0 ;i<n ; i++){
        for(int j = 0 ;j<m ; j++){
           cin>>arr[i][j];
        }
    }
    // second matrix 
    cout<<"Enter elements of second matrix : "<<endl;
    int brr[p][q];
     for(int i = 0 ;i<p ; i++){
        for(int j = 0 ;j<q ; j++){
           cin>>brr[i][j];
        }
    }
    int res[m][q];

    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<q ; j++){
            res[i][j] = 0;
             for(int k = 0 ; k<p ; k++){
                    res[i][j] += arr[i][k]*brr[k][j];
             }
        }
    }
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<q ; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
  }
  else cout<<"multipilcation cant be done ";
 

    
}