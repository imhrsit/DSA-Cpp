#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    // RR
    int remaining = getSum(arr+1, n-1);
    int sum = arr[0] + remaining;
    return sum;
}
int main(){
    int arr[5] = {3,2,5,1,6};
    int n=5;

    int ans = getSum(arr, n);
    cout<<ans<<endl;
}