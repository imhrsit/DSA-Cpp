#include<iostream>
using namespace std;

int factorial(int n){
    //base cond
    if(n==0){
        return 1;
    }

    // return n * factorial(n-1);
    int chotiProb = factorial(n-1);
    int badiProb = n*chotiProb;

    return badiProb; 
}

int main(){
    int n;
    cin >> n;

    int ans = factorial(n);
    cout<<ans<<endl;
}