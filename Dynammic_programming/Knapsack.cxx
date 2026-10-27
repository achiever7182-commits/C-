#include<iostream>
#include<vector>
using namespace std;
int profit(int idx,vector<int>& wt , vector<int>& pr,int W,vector<vector<int>>& dp ){
    
    if(idx == wt.size()) return 0;
    if(dp[idx][W]!=-1) return dp[idx][W];
    int skip =  profit(idx+1,wt,pr,W,dp);
    if(wt[idx]>W) return skip;
    int take = pr[idx] + profit(idx+1,wt,pr,W-wt[idx],dp);
    
    return dp[idx][W] = max(take,skip);
}
int main(){
    vector<int> weight = {1,2,8,10};
    vector<int> price = {5,3,9,16};
    int capacity = 8 ;
    vector<vector<int>> dp(weight.size(),vector<int>(capacity+1,-1));
    cout<<profit(0,weight,price,capacity,dp);

}