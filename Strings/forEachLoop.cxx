#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    vector<string> v;
    v.push_back("Kaif");
    v.push_back("Khan");
   for(int i = 0 ;i<v.size();i++){
    for(auto j : v[i]){
        cout<<j<<" ";
    }
   }
}