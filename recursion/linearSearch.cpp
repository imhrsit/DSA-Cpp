#include<iostream>
using namespace std;

bool isPresent(int arr[], int n, int key){
    // base case
    if(n==0){
        return 0;
    }
    if(arr[0]==key){
        return 1; 
    }
    //RR
    int left = isPresent(arr+1, n-1, key);
    return left;
}

int main(){
    int key;
    cin>>key;

    int arr[5] = {3,5,1,2,6};
    int n = 5;

    bool ans = isPresent(arr, n, key);
    cout<<ans<<endl;
}