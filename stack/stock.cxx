#include<iostream>
#include<stack>
using namespace std;

int main(){

    int arr[6] = {100,54,21,80,90,75};
    int n = 6;

    stack<int> st;
    int ans[6];

    ans[0] = -1;

    st.push(0);

    for(int i = 1; i < n; i++){

        while(st.size() > 0 && arr[st.top()] <= arr[i]){
            st.pop();
        }

        if(st.size() == 0)
            ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(i);
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout<<endl;
    int m[n];
    for(int i = 0 ;i<n;i++){
        m[i] = i-ans[i];
    }
    for(int i = 0 ;i<n;i++){
        cout<<m[i]<<" ";
    }
}