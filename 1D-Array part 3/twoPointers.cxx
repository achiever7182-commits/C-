 #include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a) {
    int n = a.size();
    int i = 0, j = n - 1;

    while (i < j) {
        if (a[i] == 0) {
            i++;
        }
        else if (a[j] == 1) {
            j--;
        }
        else {
            
            a[i] = 0;
            a[j] = 1;
            i++;
            j--;
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
