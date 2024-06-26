#include<iostream>
using namespace std;

//time complexity crying in corner...

int leftSum(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int sum=0;

    for(int i=0; i<mid; i++){
        sum=i+(i-1);
    }
    return sum;
}

int rightSum(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int sum=0;

    for(int i=mid+1; i<=size; i++){
        sum=i+(i-1);
    }
    return sum;
}

int pivotIndex(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(leftSum==rightSum){
            return mid;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[6] = {1,7,3,6,5,6};
    cout<<"Pivot Index of the array is "<<pivotIndex<<endl;
}