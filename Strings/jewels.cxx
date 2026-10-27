#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;
int main() {
    string jewels = "aA",  stones = "aAAbbbb";
    int m = jewels.size();
    int n = stones.size();
    int k = m+n;
    cout<<k<<endl;
    unordered_set<char> st;
    for(int i = 0 ;i<m;i++){
        st.insert(jewels[i]);
    }
    for(int i = 0 ;i<n ;i++){
        st.insert(stones[i]);
    }
    cout<<st.size();

}