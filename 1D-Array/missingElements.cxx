#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"Enter size of your sorted array : ";
    cin>>n;
    int k ; // missing element
    int nums[n] = {1,2 ,k,4 ,5};
    k = (n*(n+1))/2-12;
    cout<<"your missing element is "<<k;

     
}