#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,6,8,10};
    char ch[6] = "abcde";
    
    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];
    cout<<c<<endl;

    char *d = "abcde";
    cout<<d<<endl;

}