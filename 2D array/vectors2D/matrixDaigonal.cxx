#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m , n;
    cout<<"Enter size of your martrix : ";
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n ;j++){
            int x ;
            cin>>x;
            matrix[i][j] = x;
        }
    }
    // sum of primary daigonal
    int sum = 0 ;
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n ;j++){
            if(i == j){
                 sum+=matrix[i][j];
            }
        }
    }

    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n ;j++){
            if(i+j == n-1 and i!=j){
                sum+=matrix[i][j];
            }
        }
    }

   

    // sum of secondary daigonal
    /* 

    0,0  0,1  0,2
    1,0  1,1  1,2
    2,0  2,1  2,2

    1   0   0
    0   1   0
    0   0   1
    
    
    */
    cout<<sum;
    
}