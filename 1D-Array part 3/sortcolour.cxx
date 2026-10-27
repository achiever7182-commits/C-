#include<iostream>
#include<vector>
using namespace std;

 
void display(vector<int> &nums){
    int n = nums.size();
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    int i = 0;
    int j = n-1;
     while(i<=j){
    if(nums[i]==2){
        c2++;
        i++;
    }
    else if(nums[i]==1){
        c1++;
        i++;
    }
    else if(nums[i]==0){
        c0++;
        i++;
    }
}
for(int i = 0 ; i<c0 ; i++){
    cout<<0<<" ";
}
for(int i = 0 ; i<c1 ; i++){
    cout<<1<<" ";
}
for(int i = 0 ; i<c0 ; i++){
    cout<<2<<" ";
}

}
   
 
int main() {

    vector<int> v;
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
      
         
     display(v);
       

}