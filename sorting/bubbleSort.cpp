#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]); 
            isSwapped = true;
        }
        }
        if(isSwapped == false){
            break;
        }
    }
}

int main(){
    int arr[6] = {10,1,7,6,14,9};

}