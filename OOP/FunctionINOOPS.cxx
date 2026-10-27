#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    float price;
    int seats;
    string type;

};
     void printCar(Car c){
        cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
    }
int main() {
Car c1;
    c1.name  = "BMW";
    c1.price = 9*10*1000000;
    c1.seats = 5;
    c1.type = "SUV";
Car c2;
    c2.name = "Lamborgini";
    c2.price = 50000000;
    c2.seats = 2;
    c2.type = "Sport";

    printCar(c1);
    printCar(c2);



}