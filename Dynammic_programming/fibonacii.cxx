//Memoization + Recursion
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n,vector<int> &dp){
    if(n<=1) return n;
    if(dp[n]!=0) return dp[n];
    int ans = fibo(n-1,dp)+fibo(n-2,dp);
    dp[n] = ans;
    return ans;
}
int main() {
    int n;
    cout<<"Enter your n : ";
    cin>>n;
 
    vector<int> dp(n+1,0);

       cout<<fibo(n,dp);
}