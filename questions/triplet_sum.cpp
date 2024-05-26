#include<iostream>
using namespace std;



int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[6] = {1,2,3,4,5,6};
    int crr[7] = {1,2,3,4,5,6,7};

    for(int i=0; i<sizeof(arr); i++){
        for(int j=i+1; j<sizeof(brr); j++){
            for(int k=0; k<sizeof(crr); k++){
                cout<<k<<" ";
            }
            cout<<j<<" ";
        }
        cout<<i<<" ";
    }
}