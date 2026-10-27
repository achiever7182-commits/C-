#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;
    float marks;
    int rollno;
    // constructor
    student(string name , int age , float marks , int rollno){
        this->name = name;
        this->age = age;
        this->marks = marks;
        this->rollno = rollno;
    }
    void print(){
         cout<<name<<" "<<age<<" "<<marks<<" "<<rollno<<endl;
    }

  

};
int main(){
    student s("Alice", 20, 85.5, 123);
    s.print();
   
}