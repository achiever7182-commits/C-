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

    int largest = matrix[0][0];
     for(int i = 0 ; i<m ;i++){
        for(int j = 0 ; j<n ; j++){
             if(matrix[i][j]>largest)
             largest = matrix[i][j];
        }
    }
    
    cout<<largest;

}