#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    vector<int> nums;
    cout<<"Enter size of your array : ";
    cin>>n;
    cout<<"Enter your elements : ";
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cout<<"Enter your target : ";
    cin>>target;

    // sort 
    sort(nums.begin(),nums.end());
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums.at(mid)==target){
            cout<<mid<<" is your target element index ";
            break;
        }
        if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

    }
}