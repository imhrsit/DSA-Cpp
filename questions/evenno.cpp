#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a value"<<endl;
    cin >> n;
    int num = 2;
    while (num<=n) {
        cout<<num<<endl;
        num = num + 2;
    }
}