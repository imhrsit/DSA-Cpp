#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Harsh..."<<endl;
    }
    void sayHello(string name){
        cout<<"Hello Harsh..."<< name <<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();
}