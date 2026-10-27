#include<iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int pro = 1;
    int ans = 0;
    int last = 0;
    while(n>0){
        last = n%2;
        n = n/2;
        ans += last*pro;
        pro = pro*10;
        
    }
    cout<<ans;
}