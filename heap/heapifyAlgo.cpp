#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int n;

    heap(){
        arr[0] = -1;
        n = 0;
    }

    void heapify(int arr[], int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
};

int main(){
    heap h;
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n=5;
    for(int i=n/2; i>0; i--){
        h.heapify(arr, n, i);
    }
    cout<<"printing the array now"<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

    return 0;
}