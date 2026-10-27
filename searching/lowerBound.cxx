#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n ;
    vector<int> nums;
    cout<<"Enter size of your array : ";
    cin>>n;
    cout<<"Enter your elements : ";
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);

    }
    int target ;
    cout<<"Enter your target : ";
    cin>>target ;
      int low = 0;
      int high = n-1;
      while(low<high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            cout<<nums.at(mid-1);
            break;
        }
        if(target<nums[mid]){
            high = mid-1;

        }
        else if(target>nums[mid]){
            low = mid;
            if(nums.at(low)>target and nums.at(low-1)<target){
                cout<<nums.at(low-1);
            }
        }
         
     

}
}