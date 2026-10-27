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
    // void print(){
        // cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        // this->runs = 250000;
    // }
};
int main(){
    Cricketer *c1 = new Cricketer("Virat Kohli",30000,60.0);
    // Cricketer *p1 = &c1;
//  int *p = new int(4);
//  cout<<p;
        cout<<(c1)->name<<" "<<(c1)->runs<<" "<<(c1)->avg<<endl;

 
}
 