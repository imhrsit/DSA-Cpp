#include<iostream>
using namespace std;

void update(int **ptr2){
    //ptr2=ptr2+1;
    //kuch change hoga? - No
    *ptr2=*ptr2+1;
    // //kuch change hoga? - yes
    //**ptr2=**ptr2+1;
    //kuch change hoga? - yes
}

int main(){
    int i = 5;
    int *ptr = &i;
    int** ptr2 = &ptr;

    // cout<<"printing ptr "<<ptr<<endl;
    // // cout<<"address of ptr "<<&ptr<<endl;
    // cout<<"address of ptr "<<*ptr2<<endl;

    // cout<<"printing i via ptr "<<*ptr<<endl;
    // cout<<"printing i via ptr2 "<<**ptr2<<endl;

    cout<<"before "<<i<<endl;
    cout<<"before "<<ptr<<endl;
    cout<<"before "<<ptr2<<endl;
    update(ptr2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<ptr<<endl;
    cout<<"after "<<ptr2<<endl;
}