#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string type;
    int seats;
    float price;
    Car(string s ,string t,int se ,float p) {
        name = s;
        type = t;
        seats = se;
        price = p;
    }

};
   void print(Car c) {
        cout<<c.name<<" "<<c.type<<" "<<c.seats<<" "<<c.price<<endl;
    }
int main() {
    Car s1("BMW","Sedan",4,5000000);
    print(s1);
     

}