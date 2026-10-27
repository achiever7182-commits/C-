#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string name ,int runs ,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print(){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        this->runs = 250000;
    }
};
int main(){
    Cricketer c1("Virat Kohli",30000,60.0);
    Cricketer *p1 = &c1;
    cout<<(*p1).runs<<endl;;
    (*p1).print();
    cout<<c1.runs;

}