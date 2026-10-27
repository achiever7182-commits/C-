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
int main(){
int m = 3;
int n = 3;
vector<vector<int>> grid(m,vector<int>(n,0));
for(int i = 0 ;i<m;i++){
   for(int j = 0;j<n ;j++){
      int x;
      cin>>x;
      grid[i][j] = x;
   }
}  

 vector<vector<int>> dp(m,vector<int>(n,0));
        dp[0][0] = grid[0][0];

        for(int j = 1;j<n;j++){
            dp[0][j] = grid[0][j] + dp[0][j-1];
        }
         for(int j = 1;j<m;j++){
            dp[j][0] = grid[j][0] + dp[j-1][0];
        }
        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                dp[i][j] = grid[i][j] + min(dp[i-1][j],dp[i][j-1]); 
            }
        }
        display(dp);
    cout<< dp[m-1][n-1];
    
    
    
    
    
    
    
    

    
    
    
    
    
    
        
}