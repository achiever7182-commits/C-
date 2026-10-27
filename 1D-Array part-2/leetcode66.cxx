#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> nums;
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
   
    cout<<"Enter elements of your array : ";
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
vector<int> v;
    if(nums.at(n-1) !=9){
        for(int i = 0 ; i<n ; i++){
        
        if(i == n-1 and nums.at(n-1)!= 9){
            v.push_back(nums.at(i)+1);
        }
        else v.push_back(nums.at(i));
    }
   for(int i = 0 ; i<n ; i++){
    cout<<v.at(i)<<" ";
   }
    }
    if(nums.at(n-1)==9){
         vector<int> v(n+1) ;
         for(int i = 0 ; i<=n ; i++){
            if(i == n-1 ){
                v.push_back(1);

            }
            else v.push_back(nums.at(i));
         }
         for(int i = 0 ; i<=n ; i++){
    cout<<v.at(i)<<" ";
   }
        
    }
    
}