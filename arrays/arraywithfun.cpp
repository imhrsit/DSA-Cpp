#include<iostream>
using namespace std;

void fun(int Arr[], int size) {
    int i;
    for(i=0; i<size; i++)
    cout<<Arr[i]<<" ";
}

int main() {
    int Arr[5] = {2,4,6,8,10};
    fun(Arr,5);
}