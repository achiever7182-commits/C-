 #include<iostream>
#include<string>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    // constructor
    Node(int val){
        this->val = val;
        this->next = NULL;    }
};
int main() {
    // 10 20 30 40 
     Node a(10);
     Node b(20);
     Node c(30);
     Node d(40);

    // forming linkedlist
    a.next = &b;
    b.next = &c;
    c.next  = &d;
    d.next = NULL;
     
    // cout<<(((a.next)->next)->next)->val;
        Node temp = a;
while(1){
    
    cout<<temp.val<<" ";
    if(temp.next ==NULL) break;
    temp = *(temp.next);
}
    
}