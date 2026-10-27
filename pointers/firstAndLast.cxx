#include<iostream>
using namespace std;
void first(int n){
     
    
    while(n>9){
        n = n/10;

    }
    cout<<n;
}

void last(int n){
      
    
    
        n = n%10;

    
    cout<<n;

}
int main() {
    first(123);
    cout<<endl;
    last(123);

   

}