#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
                string s = "(1+(4+5+2)-3)+(6+8)";
        int n = s.size();
        stack<int> st;
        int number = 0;
        int result = 0;
        int sign = 1;
        for(int i = 0 ;i<n ;i++){
            if(isdigit(s.at(i))){
                number*10+(s[i] - '0');


            }
            else if(s[i] == '+'){
                result += number*sign;
                number = 0;
                sign = 1;

            }
            else if(s[i] == '-'){
                 result += number*sign;
                number = 0;
                sign = -1;

            }
            else if(s[i] == '('){
                st.push(result);
                st.push(sign);
                result = 0;
                number = 0 ;
                sign = 1;
            }
            else if(s[i] == ')'){
                result +=sign*number;
                number = 0 ;
                int stack_number = st.top();
                st.pop();
                int stack_sign = st.top();
                st.pop();
                result *=stack_sign;
                result += stack_number;
            }
        }
        result +=number*sign;
        cout<< result;
}