#include <iostream>
using namespace std;
int main(){
    char ch = 'H';
    int num = 1;
    cout<<endl;

    switch(ch){
        case 1: cout<<"First"<<endl;
        break;
        case 'H': cout<<"Hello world"<<endl;
        break;
        default: cout<<"Default Case"<<endl;
    }
}