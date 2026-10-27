#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seats;
    // constructor
    car(string name , int price , int seats ){
       this->name = name;
        this->price = price;
        this->seats = seats;
    }


};
int main(){
    car c("BMW",10000000,4);
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<endl;
    

}