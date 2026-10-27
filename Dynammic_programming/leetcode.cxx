#include<iostream>
#include<vector>
using namespace std;
vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum(n,0);
         vector<int> rightsum(n,0);
         for(int i = 1;i<n;i++){
            leftsum[i]+=nums[i];
         }
          for(int i = n-2;i>=1;i--){
            rightsum[i]+=nums[i];
         }
         vector<int> ans(n,0);
         for(int i = 0 ;i<n;i++){
            ans[i] = abs(leftsum[i]+rightsum[i]);
         }
         return ans;

    }

int main() {
    vector<int> nums;
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    for(int i = 0 ;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    cout<<leftRightDifference(nums);
}