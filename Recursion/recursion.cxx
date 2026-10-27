#include<iostream>
using namespace std;
void greet(int a){
    if(a==0) return;
    cout<<"Hello good morning "<<endl;
    greet(a-1);
    

}
int main() {
   int n ;
   cin>>n;
   greet(n);
}