#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //right place of pivot
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part sort karenge
    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }
    //partition karenge
    int p = partition(arr, s, e);

    //RR
    quickSort(arr, s, p-1);  //left part
    quickSort(arr, p+1, e);  // right part
}

int main(){
    int arr[5] = {3,1,4,5,2};
    int n = 5;

    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}