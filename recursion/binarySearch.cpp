#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
    // base case
    if(s>e){
        return 0;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] == key){
        return 1;
    }
    //RR
    if(arr[mid]<key){
        return binarySearch(arr, mid+1, e, key);
    } else{
        return binarySearch(arr, s, mid-1, key);
    }
}

int main(){
    int key;
    cin>>key;

    int arr[6] = {2,4,6,10,14,16};
    int n = 6;

    cout<<binarySearch(arr, 0, 5, key)<<endl;
};