#include<iostream>
using namespace std;

//pass by value
void update1(int n){
    n++;
}
//pass by reference
void update2(int& n){
    n++;
}

int main(){
    int n=5;
    cout<<"before "<<n<<endl;
    update1(n);
    cout<<"after "<<n<<endl;
}