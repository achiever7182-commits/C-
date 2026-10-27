#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {2,3,4,1,5,6,78,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
     int previoussum = 0;
     for(int i = 0 ;i<k;i++){
         previoussum +=arr[i];
     }
     int i = 1;
     int j = k;
     int currentsum = 0;
     int maximum = INT_MIN;
     while(j<n){
          currentsum = previoussum + arr[j]-arr[i-1];
         maximum = max(maximum,currentsum);
         previoussum = currentsum;
         i++;
         j++;
     }
     cout<<maximum;
}