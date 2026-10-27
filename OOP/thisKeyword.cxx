#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollnumber;
    float cgpa;
    Student(string name,int rollnumber,float cgpa){
      this->  name = name;
       this->rollnumber = rollnumber;
      this-> cgpa = cgpa;
    }
    Student(){
        
    }
    void print(){
        cout<<name<<" "<<rollnumber<<" "<<cgpa<<endl;
    }

};
int main() {
    Student s1("Kaif",416,9.39);
    Student s2;
    s2.name = "khan";
    s2.rollnumber = 414;
    s2.cgpa = 9.22;
   
    s1.print();

}