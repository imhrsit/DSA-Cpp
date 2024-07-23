#include<iostream>
using namespace std;

bool checkPlaindrome(string str, int i, int j){
    //base case
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    } else{
        //RR
        return checkPlaindrome(str, i++, j--);
    }
}

int main(){
    string name = "abcba";
    bool isPalindrome = checkPlaindrome(name, 0, name.length()-1);
    if(isPalindrome){
        cout<<"It's a palindrome";
    }else{
        cout<<"It's not a palindrome";
    }
}