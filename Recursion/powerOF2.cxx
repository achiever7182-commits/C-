#include<iostream>
using namespace std;
bool two(int n){
     if(n==1) return true;
     if(n%2!=0) return false;

     return two(n/2);
   
   
   
}
int main() {
    int n ;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<two(n);
   

}