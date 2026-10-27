#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<climits>
#include<time.h>
using namespace std;
class student{
    public:
    string name;
    int roll ;
    private:
    float cgpa;
    // constructor
    student(string name , int roll , float cgpa){
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
         
    }
    void print(){
        cout<<name<<" "<<roll<<" "<<cgpa<<endl;
    }
};
int main(){
    student s;
    s.name = "Alice";
    s.roll = 123;
    // s.cgpa = 9.5; // error because cgpa is private
    cout<<s.name<<" "<<s.roll<<endl;
    student s1("Bob", 456, 8.5);
    cout<<s1.name<<
    s.print();

}