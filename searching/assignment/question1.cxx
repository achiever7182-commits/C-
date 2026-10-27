#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of your array : ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter your elements : ";
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target ; 
    cout<<"Enter your target : ";
    cin>>target;
    int low = 0;
    int high = n-1;
    int ans;
    while(low<=high){
         int mid = (low+high)/2;
          if(nums.at(mid)==target){
             ans = mid;
            low = mid+1;
          }
         
         else if(nums.at(mid)<target){
            low = mid+1;
         }
         else high = mid-1;
    }
    cout<<ans;

}