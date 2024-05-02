#include<iostream>
using namespace std;
int main(){
    int cricket[10];
    std::fill_n(cricket, 10, 2);
    cout<<"printing the array"<<endl;
    int n = 10;
    for(int i = 0; i < n; i++){
        cout<<cricket[i]<<" ";
    }
    return 0;
}