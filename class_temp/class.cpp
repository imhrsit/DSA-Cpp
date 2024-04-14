#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
    void setlength(int l) {
        length = l;
    }
    void setBreadth(int b) {
        breadth = b;
    }
    int getlength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }
    ~Rectangle() {
        printf("Destructor");
    }
};

int main() {
    Rectangle r(10,5);
    printf("Area is %d \n", r.area());
    printf("Perimeter is %d \n", r.perimeter());
}