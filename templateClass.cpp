#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a=a;
    this->b=b;
}

template <class T>
T Arithmetic<T>::add()
{
    T c;
    c=a+b;
    return c;
}

template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}

int main() {
    Arithmetic<int> ar(10,5);
    printf("the sum is %d \n", ar.add());
    printf("the diff is %d \n", ar.sub());

    Arithmetic<float> ar2(10.5,7.3);
    printf("the sum is %f \n", ar2.add());
    printf("the diff is %f \n", ar2.sub());
}