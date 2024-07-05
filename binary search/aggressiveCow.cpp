// #include<iostream>
// using namespace std;

// bool isPossible(int arr[], int k, int mid, int n) {
    
//     int cowCount = 1;
//     int lastPos = arr[0];
    
//     for(int i=0; i<n; i++ ){
        
//         if(arr[i]-lastPos >= mid){
//             cowCount++;
//             if(cowCount==k)
//             {
//                 return true;
//             }
//             lastPos = arr[i];
//         }
//     }
//     return false;
// }

// int aggressiveCows(int arr[], int k) {
//     sort(arr.begin(), arr.end());
//     int s = 0;
//     int n = arr.size();
//     int e = arr[n-1];
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e) {
//         if(isPossible(arr, k, mid, n)) {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int arr[5] = {4,2,1,3,1};
//     cout<<aggressiveCows(arr, 2);
// }