#include<iostream>
using namespace std;
 
int main() {
    int n ;
    
    cout<<"Enter number of rows and columns of square matrix : ";
    cin>>n;
    cout<<"Enter your elements if your matrix : "<<endl;
    int matrix[n][n];
    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ; j<n ; j++){
            cin>>matrix[i][j];
        }
    }
     for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            if(i == j || (i+j == n-1)){
                cout<<matrix[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }
   
         


   

}