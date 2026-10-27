  #include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter your first number : ";
    cin>>n;
    while(n>=10){
        n = n/10;
    }
    cout<<n;
}