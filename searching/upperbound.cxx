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
            if(target == nums[mid]){
                cout<<nums.at(mid+1);
                flag = true;
                break;
            }
            else if(target>nums.at(mid)){
                low = mid+1;
            }
            else high = mid-1;
         }
         if(flag == false){
            cout<<nums.at(low);
         }
     


}