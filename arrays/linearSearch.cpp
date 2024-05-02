#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int arr[10] = {2, 45, -4, 67, 43, 35, 1, 24, 87, 99};
    
    cout<<"Enter the element to search"<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<"Element is present"<<endl;
    } else{
        cout<<"Element is absent"<<endl;
    }

}