#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n ;
    vector<int> nums;
    cout<<"Enter size of your array : ";
    cin>>n;
    cout<<"Enter your elements : ";
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);

    }
   for(int i = 0 ; i<n-1 ; i++){
    if((nums.at(i))+1!=nums.at(i+1)){
        cout<<"missing element is "<<nums.at(i)+1;
        break;
    }
   }
     

}
