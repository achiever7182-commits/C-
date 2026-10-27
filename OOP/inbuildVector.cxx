#include<iostream>
using namespace std;
class Vector{
    public:
    int size;
    int capacity;
    int* arr;
    Vector(){
        size = 0;
        capacity = 1;
         arr = new int[1];
    }
    void add(int ele){
    if(size == capacity) {

        int *arr2 = new int[capacity*2];
    }

       arr[size++] = ele;
        for(int i = 0 ;i<size;i++){
            arr2[i] = arr1[i];
        }
        arr = arr2;
       
       
    }

};
int main() {

}