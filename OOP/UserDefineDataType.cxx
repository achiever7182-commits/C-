#include<iostream>
using namespace std;
class Student{  // student is a new data type
    public:
    string name;
    int rollnumber;
    float cgpa;


};
int main() {
    Student s;
    s.name = "Kaif";
    s.rollnumber = 416;
    s.cgpa = 9.89;
    cout<<s.name<<" "<<s.rollnumber<<" "<<s.cgpa<<endl;

}