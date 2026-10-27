#include<iostream>
using namespace std;
int main() {
  int m , n;
  cout<<"Enter size of your array : ";
  cin>>m>>n;
  int arr[m][n];
  // taking input from user
  for(int i = 0 ;i<m;i++){
    for(int j = 0 ;j<n;j++){
        cin>>arr[i][j];
    }
  }
    int brr[m][n];
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            brr[i][j] = arr[j][i];
        }
    }
     for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

}