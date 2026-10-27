#include<iostream>
using namespace std;
void swap(int *p1 , int *p2 ){
     int temp = *p1;
     *p1 = *p2 ;
     *p2 = temp;

}
int main() {
    int x = 5 ;
    int y = 9;
    int *p1 = &x;
    int *p2 = &y;
    swap(p1,p2);
    cout<<x<<"  "<<y;
   

}