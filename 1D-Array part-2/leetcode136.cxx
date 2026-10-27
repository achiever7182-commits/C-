 #include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
int main() {
      int n ;
     cout<<"Enter size of your array : ";
     cin>>n;
     vector<int> nums;
     cout<<"Enter your elements : ";
     for(int i = 0 ; i<n ;i++){
         int x;
         cin>>x;
         nums.push_back(x);
     }
         //Example 2:
        // Input: nums = [4,1,2,1,2]
       // Output: 4
       sort(nums.begin(),nums.end());
 int ans = nums[n-1] ;
         for(int i=0;i<n-1;i+=2){
            if(nums[i]!=nums[i+1]){
                cout<<nums[i];
                break;
            }
         }
        cout<<ans;


         

        
       }
    
        
