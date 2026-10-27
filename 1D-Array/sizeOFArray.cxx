#include<iostream>     // size of array
using namespace std;
int main() {
       int arr[] = {1,2,3,2122,32,22,3,2,41,3,4,53,22};
       int n = sizeof(arr)/sizeof(arr[0]);
       cout<<n; 
}