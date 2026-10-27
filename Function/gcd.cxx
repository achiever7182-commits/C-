#include<iostream>
using namespace std;
int gcd(int x ,int y){
    int z = min(x,y);
    int i ;
    int hcf = 1 ;
    for(i = 1 ; i<=z ; i++){
        if(x%i==0 and y%i==0){
           hcf = i;
        
    }
}
    return hcf;
}


int main(){
    int x , y;
    cout<<"Enter your first number : ";
    cin>>x;
    cout<<"Enter your second number : ";
    cin>>y;
    cout<<gcd(x,y);
    

}
