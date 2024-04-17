#include<iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";

    int n = 10;
    for(int i=1; i<=n; i++){
        int fibNum = a+b;
        cout<<fibNum<< " ";

        a = b;
        b = fibNum;
    }
}