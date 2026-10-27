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
     bool flag = false;
       while(low<=high){
            int mid = (low+high)/2;
            if(target == nums.at(mid) and nums.at(mid)>nums.at(mid+1)){
                cout<<mid;
                break;
            }
            else if(target>nums.at(mid)){
                low = mid+1;
                if(nums.at(low)>nums.at(low-1)){
                    cout<<low;
                    break;
                }
            }
            else {
                high = mid-1;
                if(nums.at(high)>nums.at(high-1)){
                    cout<<high;
                    break;
                }
            }
       }
     


}