#include<iostream>
#include<vector>
using namespace std;
int main() {
     vector<int> nums;
      int n ;
     
    
     cout<<"Enter size of your array : ";
     cin>>n;
     cout<<"Enter your elements : ";
     for(int i = 0 ; i<n;i++){
         int x;
         cin>>x;
         nums.push_back(x);
     }
     vector<int> v(nums.size());

     // permutating 
     for(int i = 0 ; i<n;i++){
        v[i] = nums[nums[i]];
     }
     // printing 
     for(int i = 0 ; i<n;i++){
        cout<<v.at(i)<<" ";
     }
}