#include<iostream>
#include<vector>
using namespace std;
int main() {
   
    int m , n;
    cout<<"Enter number of rows of your matrix : ";
    cin>>m;
     cout<<"Enter number of columns of your matrix : ";
    cin>>n;
    cout<<"Enter your elements : ";
    cout<<endl;
     int matrix[m][n];
   
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            cin>>matrix[i][j];
        }
    } 
    int transpose[n][m];
     // transpose
       for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
             transpose[i][j] = matrix[j][i];

            }
    } 
     
    for(int i = 0;i<m;i++){
        int low = i;
        int high = n-1;
        while(low<=high){
            int temp = transpose[low][i];
            transpose[i][low] = transpose[i][high];
            transpose[i][high] = temp;
            low ++;
            high--;

        }
    }
     for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            cout<<transpose[i][j]<<" "  ;

            }
            cout<<endl;
    } 
    


}