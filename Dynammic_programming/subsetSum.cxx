#include<iostream>
#include<vector>
using namespace std;
bool subset(int i,vector<int>& nums,int target,vector<vector<int>>& dp){
    
    if(i == nums.size()) {
        if(nums[i] - target == 0) return true;
        else return false;
    }
    bool ans = false;
    if(dp[i][target] !=-1) return dp[i][target] == 1;
     bool skip = subset(i+1,nums,target,dp);
     if(target-nums[i]<0) ans = skip;
     else{
          bool pick = subset(i+1,nums,target-nums[i],dp);
          ans = pick || skip;
     }
  
   
    if(ans) dp[i][target] = 1 ;
    else dp[i][target] = 0;
    return ans;

}
int main(){
    vector<int> nums = {8,5,2,4};
    int target = 9;              
    vector<vector<int>> dp(nums.size(),vector<int>(target,-1));
    
    
    cout<<subset(0,nums,target,dp);

}