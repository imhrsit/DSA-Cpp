#include<iostream>
using namespace std;

int power(int n){
    //base cond
    if(n==0){
        return 1;
    }

    // return n * factorial(n-1);
    int chotiProb = power(n-1);
    int badiProb = 2*chotiProb;

    return badiProb; 
}

int main(){
    int n;
    cin >> n;

    int ans = power(n);
    cout<<ans<<endl;
}