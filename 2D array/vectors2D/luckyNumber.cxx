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
       int flag = 1;
        vector<int> ans;
        int mini = INT_MAX;
        int maxi = INT_MIN;
    int idi = -1, idj = -1;
        // int m = matrix.size();
        // int n = matrix[0].size();
        for(int i = 0 ;i<m ;i++){
            for(int j = 0 ;j<n ;j++){
               if(mini>matrix[i][j]){
                mini = matrix[i][j];
                idi = i;
               }
            }
            for(int j = 0;j<n;j++){
                if(mini<matrix[idi][j]){
                    flag = 0;
                }
            }
            if(flag == 1){
                ans.push_back(mini);
            }

        }
        for(int i = 0 ;i<ans.size();i++){
            cout<<ans.at(i)<<" ";
        }
        cout<<ans.size();
    
    
}