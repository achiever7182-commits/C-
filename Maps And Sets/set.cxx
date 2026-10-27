#include<iostream>
#include<unordered_set>
using namespace std;
int main() {
    unordered_set<int> s;
    int n ;
    cout<<"Enter size of your set : ";
    cin>>n;
    for(int i = 0 ;i<n ;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto ele : s){
        cout<<ele<<" ";
        
    }

}