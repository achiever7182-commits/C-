#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0];

    int *p = arr  ;
    cout<<p;
    int *ptr = &arr[0];
  //  int *p = arr[0]; gives error
}