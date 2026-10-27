#include<iostream>
using namespace std;
int main(){
    int m , n;
    cout<<"Enter number of your rows and columns : ";
    cin>>m>>n;
    int mat[m][n];
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n ; j++){
            cin>>mat[i][j];
        }
    }
    int matt[m][n];
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            if(mat[i][j]==0){
                for(int k = 0;k<3;k++){
                    matt[i][k] = 0;
                    matt[k][j] = 0;
                }
                
            }
            else matt[i][j] = 1;
        }
    }
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<3 ; j++){
            cout<<matt[i][j]<<" ";
        }
        cout<<endl;
    }
}