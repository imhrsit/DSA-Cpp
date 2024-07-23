#include<iostream>
using namespace std;

void reverse(int i, int j, string& s){
    //base case
    if(i>j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;

    //RR
    reverse(i, j, s);
}

int main(){
    string name = "harsh";
    reverse(0, name.length()-1, name);
    cout<<name<<endl;
    return 0;
};