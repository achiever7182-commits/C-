#include<iostream>
using namespace std;
void rev(int a[],int n ){
    if(n==0) return ;
    cout<<a[n-1]<<" ";
    rev(a,n-1);



}
int main() {
    int arr[5] = {1,2,3,4,5};
   int n = 5;
    rev(arr, n );
}