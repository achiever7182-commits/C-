#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> nums;
     int n;
     cout<<"Enter size of your array : ";
     cin>>n; 
     // taking input
     cout<<"Enter your elements : "<<endl;
     for(int i = 0 ;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
     }
     // greatest previous array 
     vector<int> v;
     int k = nums[0];
     v.push_back(-1);
     v.push_back(nums[0]);
      for(int i = 2 ;i<n;i++){
        if(k<nums[i-1]){
            k = nums[i-1];
        }
        v.push_back(k);
      }
      
      
     // gretest after array 
      vector<int> vv(n,0);
      vv[n-1] = -1;
      k = nums[n-1];
      for(int i = n-2;i>=0;i--){
        if(k>nums[i+1]){
            vv[i] = k;
        }
        else{
            k = nums[i+1];
            vv[i] = k;
        }
      }
      
 
 
// min array of v and vv
vector<int> m;
for(int i = 1;i<n-1;i++){
    int l = min(v.at(i),vv.at(i));
    m.push_back(l);
}
 
int p = m.size();
 
 
// raining water
int water =  0;
 int j = 0;
 for(int i = 1;i<n-1;i++){
if(m.at(j)>nums[i]){
    water += (m.at(j)-nums[i]);
}
j++;
 }
 cout<<water;
 

 


}