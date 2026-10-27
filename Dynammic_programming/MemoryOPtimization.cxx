#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    cout<<"Enter your n : ";
    cin>>n;
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 1;i<n;i++){
        dp[2] = dp[0] + dp[1];
        dp[0] = dp[1];
        dp[1] = dp[2];
    }
    cout<<dp[2];
    
}