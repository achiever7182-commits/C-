#include<iostream>
using namespace std;
class Node{
    public:
  int val;
  Node* next;
  Node(int val){
      this->val = val;
      this->next = NULL;
      
  }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtbeg(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
           
        }
       else{
             temp->next = head;
        head = temp;
        
       }
       size++;
    }
   void insertAtidx(int val,int idx){
        if(idx==0) insertAtbeg(val);
        else if(idx == size) insertAtend(val);
        else{
            Node* t = new Node(val);
            Node *temp = head;
            for(int i = 1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
     void insertAtend(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
           
        }
       else{
            tail->next = temp;
        tail = temp;
        
       }
       size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=0){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main() {
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    LinkedList ll ; // {}
    ll.insertAtbeg(10);
    ll.display();
     ll.insertAtbeg(20);
      ll.display();
      ll.insertAtidx(1,1);
      cout<<endl;
      ll.display();   
}