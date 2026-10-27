#include<iostream>
#include<algorihtm>
#include<vector>
using namespace std;
int mincost(vector<int>& cost , vector<int>& dp){
 if (idx < 0) return 0;
        if(idx == 0 or idx == 1) return cost[idx];
        if(dp[idx]!=-1) return dp[idx];
        return dp[idx] = cost[idx] + min(mincost(cost,idx-1,dp),mincost(cost,idx-2,dp));


}
int main(){
    vector<int> cost;
    int n;
    cout<<"Enter size of your array : ";
    cin>>n;

    for(int i = 0;i<n ;i++){
        int x;
        cin>>x;
        cost.push_back(x);
    }

    vector<int> dp(n,0);
    cout<<mincost(cost,dp); 



}