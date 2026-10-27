#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left ;
    Node* right ;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void reverse(Node* root,int clevel,int reqlevel){
     if(root == NULL) return;
    if(clevel==reqlevel) cout<<root->val<<" ";
    
  
    reverse(root->right,clevel+1,reqlevel);
      reverse(root->left,clevel+1,reqlevel);
}
void display(Node* root,int clevel,int reqlevel){
    if(root == NULL) return;
    if(clevel==reqlevel) cout<<root->val<<" ";
    
    display(root->left,clevel+1,reqlevel);
    display(root->right,clevel+1,reqlevel);
    
}
    void print(Node* root){
        int n = level(root);
        
        for(int i = 1 ;i<=n;i++){
           if(i%2!=0){
                display(root,1,i);
           }
           else{
                reverse(root,1,i);
           }
           cout<<endl;
            
        }
        
        return ;
    }

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
     a->left = b;
     a->right = c;
     b->left = d;
     b->right = e;
     c->left = f;
     c->right = g;
     print(a);
      
     
}