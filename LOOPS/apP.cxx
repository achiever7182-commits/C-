#include<iostream>
using namespace std;
int main() {
    // 1 - 2 + 3 - 4 ......
    int n , i , sum1 = 0,sum2=0  ;
    cout<<"Enter your number : ";
    cin>>n;
     for(i = 1 ; i<=n ; i++){
        if(i%2==0){
            sum1 = (sum1 + i);
        }
        else 
        sum2 = sum2 + i;
     }
     cout<< sum2 - sum1;

      
}