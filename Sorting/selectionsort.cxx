#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> nums;
    // taking input
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    cout<<"Enter your elements : ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    // sort
    for(int i = 0 ; i<n-1 ; i++){
        int min = i;
        for(int j = i+1 ; j<n;j++){
              if(nums.at(min)>nums.at(j)){
                min = nums.at(j);
              }
        }
        swap(nums.at(i),nums[min]);
    }
    for(int i = 0 ; i<n ; i++){
        cout<<nums.at(i)<<" ";
    }

}