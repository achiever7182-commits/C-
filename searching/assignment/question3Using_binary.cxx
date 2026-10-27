#include<iostream>
 
using namespace std;
int main() {
     int n;
   
   
    cout<<"Enter your array size : ";
    cin>>n;
   int matrix[n][n];
     cout<<"Enter your elements : "<<endl;
     for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>matrix[i][j];
        }
     }
     int low = 0;
     int high = n-1;
     for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            while(low<=high){
                if(matrix[i][j]==1){
                    
                }
            }
        }
     }
    
    }