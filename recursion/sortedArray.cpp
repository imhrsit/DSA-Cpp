#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    //base case
    if(n==0 || n==1){
        return true;
    }
    //RR
    if(arr[0] > arr[1]){
        return false;
    }
    return isSorted(arr+1, n-1);
}

int main(){
    int arr[5] = {2,3,6,8,12};
    int n=5;

    bool ans = isSorted(arr, n);
    cout<<ans<<endl;
}