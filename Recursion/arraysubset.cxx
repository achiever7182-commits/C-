#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int> ans ,vector<int> orig){

    int n = orig.size();

}

int main() {
    vector<int> v;
    int n ;
    cout<<"Enter the size of array : ";
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }

    vector<int> k ;
    subset(k,v);

    return 0;
}