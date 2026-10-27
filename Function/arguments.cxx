#include<iostream>
using namespace std;
void  starpattern(int n ){
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
     
}
int main() {
    starpattern(3);
    starpattern(8);
  

}