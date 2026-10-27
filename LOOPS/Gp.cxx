#include<iostream>
using namespace std;
int main() {
    // GP : 2 4 8 16 32 64 .....
    int a = 2;
    for(int i = 1 ; i<=6 ; i++){
        cout<<a<<endl;
        a = a*2;
    }
}