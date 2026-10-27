#include<iostream>
using namespace std;
int main() {
    string word = "USA";
    int n = word.size();
    int count = 0;
    for(int i = 0 ;i<n ; i++){
        int l = int(word[i]);
        if(l>=65 and l<=90) count++;

    }
    if(count == 0 or count == n or count == 1) cout<<true;
    else cout<<false;
    // cout<<count;
}