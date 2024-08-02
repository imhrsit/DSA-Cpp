#include<iostream>
using namespace std;

class Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class Human{
    public:
    void speak(){
        cout<<"speaking..."<<endl;
    }
};

//multiple inheritance
class Hybrid: public Animal, public Human{
};

int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}