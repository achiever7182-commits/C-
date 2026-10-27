#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    int n ;
    cout<<"Enter number of elements u want to enter : ";
    cin>>n;
    for(int i = 0 ;i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}