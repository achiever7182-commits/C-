#include<iostream>
using namespace std;
class Car{  // student is a new data type
    public:
    string name;
    int speed;
    float rpm;




};
int main() {
   Car BMW;
   BMW.name = "M5";
   BMW.speed = 395;
   BMW.rpm = 2000;
   cout<<BMW.name<<" "<<BMW.speed<<" "<<BMW.rpm<<endl;
   
   
   
   


}