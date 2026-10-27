#include<iostream>
#include<vector>
using namespace std;
void fun(int arr[3][3]){ // size of both row and column should be given 
   arr[0][0] = 2;
}

int main() {
    
     int arr[3][3] = {{1,2},{1,2,3},{4,3,5}};
     cout<<arr[0][0]<<endl;
     fun(arr);
cout<<arr[0][0]<<endl;


       
     


}