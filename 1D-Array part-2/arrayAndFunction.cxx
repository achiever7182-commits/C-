#include<iostream>
using namespace std;
void f(int a[],int size){
    for(int i = 0 ; i<=size;i++){
           cout<<a[i]<<" ";
    }
}
void change(int b[],int s){
    b[2]=122;
}

int main() {
    int arr[] = {1,2,3,4,};
    int s = sizeof(arr)/sizeof(arr[0]);
            f(arr,s);
            change(arr,s);
            cout<<endl;
            f(arr,s);
   
  
    
}