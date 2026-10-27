#include<iostream>
#include<climits>
using namespace std;
// void ar(int arr[] , int n,int i ,int max){
//      if(i==n) {
        
//         cout<<max;
//         return;
//      }
     
//      if(max<arr[i]) max = arr[i];
//      ar(arr,n,i+1,max);



// }
int maxarr(int arr[],int n ,int idx){

    if(idx == n) return arr[idx];
    if(arr[idx]>arr[idx+1]){
        maxarr( arr, n , idx)
    }

}
int main() {
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int max = INT_MIN;
     
    // ar(a,n,0,max);
    cout<<maxarr(arr,n,0);
    

}