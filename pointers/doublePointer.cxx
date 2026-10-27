#include<iostream>
using namespace std;
int main( ) {
    int x;
    int *p = &x;
    int **ptr = &p;
    cout<<p;
    cout<<endl;
    cout<<ptr;
}