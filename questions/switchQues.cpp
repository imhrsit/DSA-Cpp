#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount"<<endl;
    cin>>amount;

    int num = 1;
    int note = 0;
    switch (num)
    {
    case 1:
        note = amount/100;
        amount = amount - (note*100);
        cout<<note<<" Rs100 notes required"<<endl;
    case 2:
        note = amount/50;
        amount = amount - (note*50);
        cout<<note<<" Rs50 notes required"<<endl;;
    case 3:
        note = amount/20;
        amount = amount - (note*20);
        cout<<note<<" Rs20 notes required"<<endl;
    case 4:
        note = amount/1;
        amount = amount - (note*1);
        cout<<note<<" Rs1 notes required"<<endl;
        break;
    
    default:
    cout<<"Wrong amount"<<endl;
        break;
    }
}