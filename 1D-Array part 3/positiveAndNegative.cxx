 #include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void swap(vector<int> &b , int i , int j){
    int n = b.size();
    int temp;
    temp = b[i];
    b[i] = b[j];
    b[j] = temp;
    i++;
    j--;


}

void display(vector<int> &a) {
    int n = a.size();
    int i = 0, j = n - 1;

    while (i < j) {
        if (a[i] >=0) {
            i++;
        }
        else if (a[j] <= 0) {
            j--;
        }
         else if(a[i]<0 and a[j]>0){
            swap(a ,i , j);
         }
    }
}

int main() {
    vector<int> v;
    int n;

    cout << "Enter size of array : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    display(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
   
}