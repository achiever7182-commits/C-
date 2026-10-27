#include<iostream>
#include<climits>
#include<vector>
int fact(int n ){
    int f = 1;
    for(int i = 1 ; i<=n ; i++){
        f = f*i;
    }
    return f; 
}
using namespace std;
int main() {
       vector<int> nums;
       int n;
       cout<<"Enter size of your array : ";
       cin>>n;
       cout<<"Enter your elements : ";
       for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
       }
      int l = INT_MIN;
      for(int i = 0 ; i<n ; i++){
        if(nums.at(i)>l) l = nums.at(i);
      }
      cout<<fact(l);

}