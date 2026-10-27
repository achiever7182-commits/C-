#include<iostream>
using namespace std;

class Node{
    public:
    int val ;
    Node *next;
    LinkedList(int val){
        this->val = val;
        next = NULL;
    }
};
int main() {
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

}