#include<iostream>
using namespace std;

void swap(int a[], int x, int y)
{

    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void sortArray(int arr[], int n){
    //base case
    int count = 0;
    if(n==0 || n==1){
        return;
    }
    //RR
    int minIndex = 100;
    int index;
    for(int i=0; i<n; i++){
        if(arr[i]<minIndex){
            minIndex=arr[i];
            index = i;
        }
    }
    swap(arr, count, index);
    index++;
    sortArray(arr+1, n-1);
}

int main(){
    int arr[5] = {2,7,4,9,1};
    sortArray(arr, 5);
    for(int i=0; i<5; i++)
        cout<<arr[i]<<" ";
}