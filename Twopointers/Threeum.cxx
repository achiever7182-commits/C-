// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.



#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void bruteforce(vector<int> &nums){
    int n = nums.size();
    // [-1,0,1,2,-1,-4]
    sort(nums.begin(),nums.end());
    for(int i = 0 ;i<n-2;i++){
        for(int j = i+1;j<n-1;j++){
            for(int k = j+1;k<n ;k++){
                if(nums[i]+nums[j]+nums[k] == 0){
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                }
            }
        }
    }
}
void optimal(vector<int> &nums){
     sort(nums.begin(),nums.end());
    int n = nums.size();
    for(int i = 0 ;i<n ;i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
            if(nums[i]+nums[j]+nums[k]<0) j++;
             else if(nums[i]+nums[j]+nums[k]>0) k--;
            else {
                cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                break;
            }
        }
    }
}

int main() {
    vector<int> nums;

    int n;
    cout<<"Enter size of your array : ";
    cin>>n;

    cout<<"Enter Elements of your array : ";
    for(int i = 0 ;i<n ;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    optimal(nums);

    

}