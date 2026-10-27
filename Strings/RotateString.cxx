#include<iostream>
#include<string>
using namespace std;
int main() {
    string s = "abcde";
    string goal = "cdeab";
    int n = s.size();
    int m = goal.size();
    if(n != m) cout<<false;
     s.pop_back();
     for(int i = 0 ;i<n ;i++){
        string l = s[n-1];
        s.pop_back();
        s.insert(0,l);
        if(s == goal){
             cout<<true;
             break;
        }
     }


}