#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    //int arr[] = int *arr
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[6] = {1,2,3,4,5,8};
    // cout<<"address of first memory block "<<arr<<endl;
    // cout<<"value of first memory block "<<arr[0]<<endl;
    // cout<<"address of first memory block "<<&arr[0]<<endl;

    // cout<<"value of first memory block "<<*arr<<endl;
    // cout<<"value of first memory block "<<*arr+1<<endl;

    // cout<<"value of second memory block "<<*(arr+1)<<endl;

    // cout<<"value of third memory block "<<3[arr]<<endl;

    cout<<"Sum is "<< getSum(arr+3, 3)<<endl;
    return 0;
}