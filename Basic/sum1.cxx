#include<iostream>
using namespace std;
int main() {
    int n = 10203004;
       long long k = 1;
        long long  m = n;
        long long  x = 0;
        long long  sum = 0 ;
        while(m>0){
          if(m%10 !=0 ){
              x = x+((m%10 * k));
            k = k*10;
            sum+=m%10;
            
          }
          m = m/10;

        }
        cout<< x*sum;
}