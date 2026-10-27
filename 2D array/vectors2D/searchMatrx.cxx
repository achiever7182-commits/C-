#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m ;
    int n ;
    cout<<"Enter number of rows and columns : ";
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            int x;
            cin>>x;
            matrix[i][j] = x;
        }
    }
   int target ;
   cout<<"Enter your target : ";
   cin>>target;
  
        bool flag = false;
        for(int i = 0 ;i<m ;i++){
             int low = 0;
             int high = n-1;
             
             while(low<=high){
                int mid = low +(high-low)/2;
                if(matrix[i][mid] == target) {
                    flag = true;
                    break;
                }
                else if(matrix[i][mid]<target){
                    low = mid +1;
                }
                else {
                    high = mid-1;
                }
             }

        }
        cout<<flag;

   

}