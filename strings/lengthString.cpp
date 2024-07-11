#include<iostream>
using namespace std;

int getLength(char ch[]){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char ch[20];
    cout<<"Enter your name"<<endl;
    cin>>ch;

    cout<<ch<<endl;
    cout<<"length "<<getLength(ch);
}