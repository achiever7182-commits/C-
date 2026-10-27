#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int n = s.size();
    int ss = -1;
    int sum = 0;
    for(int i = 0 ;i<n;i++){
        ss = s.at(i);
        sum+=int(ss);
    }
    cout<<sum;

}