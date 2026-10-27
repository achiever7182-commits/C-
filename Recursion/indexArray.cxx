#include<iostream>
#include<vector>
using namespace std;
int idx(vector<int> &v,int id,int i ){
    int n = v.size();
    if(i==n) return -1;
    if(id==v.at(i)) return i;
    return idx(v,id,i+1);
   return -1;



}
int main() {
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter your elements : ";
    for(int i = 0 ;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Enter your target element : ";
    int k;
    cin>>k;
    cout<<idx(nums,k,0);
    

}