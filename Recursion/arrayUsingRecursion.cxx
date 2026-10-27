#include<iostream>
using namespace std;
void ar(int arr[] , int n,int i ){
    if(i==n) return;
    cout<<arr[i]<<" ";
    ar(arr,n,i+1);

}
int main() {
    int n = 5;
    int a[5] = {1,2,3,4,5};
    int i = 0;
    cout<<"[ ";
    ar(a,n,i);
    cout<<"]";

}