#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seats;

};
int main(){
    car c1;
    c1.name = "BMW";
    c1.price = 1000000;
    c1.seats = 4;

    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<endl;

}