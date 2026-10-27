#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float marks;
    // constructor
    student(string name , int roll,float marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
        
    }
};
void change(student (*s)){
    (*s).name = "kk";
}
void p(student *s){
    s->name = "k";
}
 
int main() {
    student s("kaif",416,99);
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;
    
    p(&s);
    cout<<s.name<<endl;
     
    
     
}