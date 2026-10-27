#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int pro = 1;
    int ans = 0;
    int last = 0 ;
    while(n>0){
        last = n%10;
        ans += last*pro;
        n = n/10;
        pro *=2;
    }
    cout<<ans;
}