#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main() {
    int *p;

    p = new int[5];  //accessing directly the heap memory
    p[0]=2, p[1]=4, p[2]=6, p[3]=8, p[4]=10;

    for(int i=0; i<5; i++)
    cout<<p[i]<<endl;
    
    delete [] p;
}