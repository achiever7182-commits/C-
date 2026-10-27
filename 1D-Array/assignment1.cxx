#include<iostream>
#include<vector>
using namespace std;
int main() {
    // calculate the product of all elements of given array 
    int n ;
    cout<<"Enter number of elements of your array : ";
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int p = 1;
    for(int i = 0 ; i<n ; i++){
            p = p*nums.at(i);
    }
    cout<<p;
}