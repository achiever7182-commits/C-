#include<iostream>
using namespace std;
int main() {
    cout<<"Enter your number : ";
    int n ;
    cin>>n;
    if(n%3==0){
        cout<<n<<" is division by 3 ";
    }
    if(n%5==0){
        cout<<"  "<<n<<" is divisible by 5 ";
    }
    if(n%3==0 and n%5==0 ){
        cout<<endl;
        cout<<"divided by both 3 and 5 ";
    }
}