#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<num<<endl;
    cout<<"Address of num "<<&num<<endl;

    int *ptr = &num;
    cout<<"Address is "<<ptr<<endl;
    cout<<"Value is "<<*ptr<<endl;

    double d = 4.3;
    double *p2 = &d;
    cout<<"Address is "<<p2<<endl;
    cout<<"Value is "<<*p2<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is "<<sizeof(p2)<<endl;

    //copying a pointer into another pointer
    int *p3 = ptr;
    cout<<ptr<<" - "<<p3<<endl;
    cout<<*ptr<<" - "<<*p3<<endl;

    //important
    int i=3;
    int *t = &i;
    // cout<< (*t)++ <<endl;
    *t = *t+1;
    cout<< *t <<endl;
    cout<< "before t - "<<t <<endl;
    t=t+1;
    cout<< "after t - "<<t <<endl;
}