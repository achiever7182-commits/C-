#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    for(int i = 0 ;i<n ;i++){
        for(int k = i;k<n ;k++){
            for(int j = i;j<=k ;j++){
                cout<<arr[j];
            }
            cout<<endl;
        }
        
    }
}