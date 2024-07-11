#include<iostream>
using namespace std;

void reverseString(char ch[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s], ch[e]);
        s++;
        e--;
    }
}

int getLength(char ch[]){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char ch[20];
    cout<<"Enter some string"<<endl;
    cin>>ch;

    cout<<ch<<endl;
    int len = getLength(ch);
    cout<<"Length "<<len<<endl;
    reverseString(ch, len);
    cout<<ch<<endl;
}