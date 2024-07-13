#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    while (a != b)
    {
        if(a>b) return a=a-b;
        else b=b-a;
    }
    return a;
}

int main(){
    cout<<"Enter first element"<<endl;
    int a,b;
    cin>>a;
    cout<<"Enter second element"<<endl;
    cin>>b;

    int ans = gcd(a,b);
    cout<<ans<<endl;
}