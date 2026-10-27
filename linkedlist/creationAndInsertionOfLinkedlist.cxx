#include<iostream>
using namespace std;
class LinkedList{
    public:
    int val;
    LinkedList* next;
    LinkedList(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main() {
    LinkedList *a = new LinkedList(10);
    LinkedList *b = new LinkedList(20);
    LinkedList *c = new LinkedList(30);
    LinkedList *d = new LinkedList(40);
    LinkedList *e = new LinkedList(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

   
   
   
   

}