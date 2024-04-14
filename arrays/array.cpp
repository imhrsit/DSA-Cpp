#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    int A[n];
    A[0]=2;
    A[1]=4;

for(int x:A)
{
    cout<<x<<endl;
}

return 0;
}