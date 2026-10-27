#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>>& dp){
    for(int i = 0 ;i<dp.size();i++){
        for(int j = 0 ;j<dp[0].size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main() {
    int m = 3;
int n = 4;
vector<vector<int>> grid(m,vector<int>(n,0));
for(int i = 0 ;i<m;i++){
   for(int j = 0;j<n ;j++){
      int x;
      cin>>x;
      grid[i][j] = x;
   }
}  

 vector<vector<int>> dp(m,vector<int>(n,0));
 for(int i = 0;i<m;i++){
    dp[i][0] = grid[i][0];
 }
  for(int i = 0;i<n;i++){  
     dp[0][i] = grid[0][i];
  }                           
    for(int i = 1;i<m;i++){
        for(int j = 1;j<n;j++){
            if(grid[i][j] == 1){
                if(grid[i-1][j] == 1 and grid[i][j-1] == 1 and grid[i-1][j-1] == 1){
                    dp[i][j] = 2;
                }
                else dp[i][j] = 1;

            }
            if(dp[i][j] == 2){
                if(dp[i-1][j] == 2 and dp[i-1][j-1] == 2 and dp[i][j-1] == 2){
                    dp[i][j] = 3;
                }
            }
                
        
        }
    }
    cout<<endl<<endl;
    display(dp);
    
    
    
}