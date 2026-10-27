#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    // second largest element of array in one pass
    int n ;
    cout<<"Enter number of elements of your array : ";
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
     
   for(int i = 0 ; i<n ; i++){
    for(int j = i+1 ; j<n-1 ; j++){
        if(nums.at(i)==nums.at(j)){
            cout<<"array contain duplicates "; break;
        }
    }
   }
    
    
}