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
    int ans = -1;
    // highest occurance 
    while(low<=high){
        int mid = (low+high)/2;
        if(target == nums[mid]){
            ans = mid;
            low = mid+1;
        }
        else if(target>nums[mid]){
            low = mid+1;

        }
        else high = mid-1;
    }
     //lowest occurance 
      low = 0;
     high = n-1; 
    int bns = -1;
   
    while(low<=high){
        int mid = (low+high)/2;
        if(target == nums[mid]){
            bns = mid;
             high = mid-1;
            
        }
        else if(target>nums[mid]){
            low = mid+1;

        }
        else high = mid-1;
    }
    cout<<(ans-bns)+1;
    


    

}