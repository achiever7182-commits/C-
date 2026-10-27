#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    vector<int> nums;
    cout<<"Enter number of elements in your array : ";
    cin>>n;
    for(int i = 0 ; i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    for(int i = 1 ; i<n ; i++){
        int j = 1 ;
        while(j>=1){
            if(nums.at(j)<nums.at(j-1)){
                swap(nums[j],nums[j-1]);
            }
             if(nums.at(j)>nums.at(j+1)){
                swap(nums[j],nums[j+1]);
            }
            j--;
             
        }
    }
    for(int i =  0;i<n ; i++){
        cout<<nums[i]<<" ";
    }

}