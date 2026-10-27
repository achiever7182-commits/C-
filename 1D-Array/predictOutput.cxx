#include<iostream>
using namespace std;
int main( ) {
     int num[25],temp;
        num[0] = 100;
        num[25] = 200;
        temp = num[25];
        num[25] = num[0];
        num[0] = temp;
        cout<<endl<<num[0]<<" "<<num[25];



     

}