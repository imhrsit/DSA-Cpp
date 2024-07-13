#include<iostream>
using namespace std;

int largestRowSum(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    int index = -1;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
            sum += arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            index = row;
        }
    }
    cout<<"maximum sum is "<<maxi<<endl;
    return index;
}

void printSum(int arr[][4], int row, int col){
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3][4];
    cout<<"Enter the elements "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    printSum(arr, 3, 4); 
    int ansIndex = largestRowSum(arr, 3, 4);
    cout<<"maximum row is at index "<< ansIndex <<endl;
}