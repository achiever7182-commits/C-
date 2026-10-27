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
     int max = -1;
     int idx = -1;
     
    int low = 0;
    int j ;
    int high = n-1;
    for(int i = 0 ; i<n ; i++){
        int sum = 0;
        for( j = 0 ; j<n ; j++){
           sum = sum+matrix[i][j];
        }
        if(sum>max){
            max = sum;
            idx = i;

        }
    }
    cout<<idx<<" row has max number of 1";

}