#include<iostream>
using namespace std;
int main() {
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int matrix[m][n];
    for(int i = 0 ; i<m ;i++){
        for(int j = 0 ; j<n ; j++){
            cin>>matrix[i][j];
        }
    }
    int com = 0 ;
    int rsum = 0;
    int row = 0;
    for(int i = 0 ; i<m ;i++){
        for(int j = 0 ; j<n ; j++){
            
         rsum = rsum+matrix[i][j];


        }
        if(com<rsum){
           
            com = rsum;
           row = i;

        }
         rsum = 0;
    }
    cout<<"row number is "<<row<<" sum is "<<com;


   

}