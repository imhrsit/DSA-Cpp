#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"source "<< src <<" dest "<< dest << endl;
    // base case
    if(src == dest){
        cout<< "pahuch gaya bhai ghar"<<endl;
        return;
    }
    //processing
    src++;

    //recursive relation
    return reachHome(src, dest);
}

int main(){
    int dest = 10;
    int src = 1;
    reachHome(src, dest);
}