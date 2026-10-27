#include<iostream>
using namespace std;
    class linkedlist{
        public:
        int val;
        linkedlist* next;
        linkedlist(int val){
            this->val = val;
            this->next = NULL;
        }
    };
void AddAtTail(int val , linkedlist* head){
    int size = 0;
    linkedlist* temp = head;
    while(temp != NULL) {
        size++;
        temp = temp->next;
    }
    temp = head;
    linkedlist* tail = NULL;
    if(size == 0){
        head = tail = temp;

    }
    else{
        tail ->next = temp;
        tail = temp;
    }
}
int main() {
    linkedlist* LL;
    
}