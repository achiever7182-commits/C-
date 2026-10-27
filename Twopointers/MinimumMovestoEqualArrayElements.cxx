#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> height;


    int n;
    cout<<"Enter size of your array : ";
    cin>>n;


    cout<<"Enter Elements of your array : ";
    for(int i = 0 ;i<n ;i++){
        int x;
        cin>>x;
        height.push_back(x);
    }
    
    
}

