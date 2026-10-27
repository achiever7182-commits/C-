#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int rev(int n ){
   string k = to_string(n);
   reverse(k.begin(),k.end());
   int ans = stoi(k);  
    return ans;

}
int main(){
    vector<int> nums;
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    for(int i = 0 ;i<n ;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
        for(int i = 0 ;i<n ;i++){
         int k =   rev(nums[i]);
         nums.push_back(k);

        }
        unordered_set<int> s;
        for(int i = 0 ;i<nums.size();i++){
            s.insert(nums[i]);

        }
        cout<< s.size();
       
}