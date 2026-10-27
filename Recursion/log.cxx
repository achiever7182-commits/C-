#include<iostream>
using namespace std;
int pow(int x , int n){
     if(n==0) return 1;
    int ans = pow(x,n/2);
   
    if(n%2==0) return ans*ans;
     else return x*ans*ans;
}
int main() {
    cout<<pow(3,4);

}