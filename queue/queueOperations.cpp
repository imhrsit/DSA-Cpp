#include<iostream>
#include<queue>
using namespace std;
int main(){
    
    //create a queue
    queue<int> q;

    q.push(5);
    q.push(17);
    q.push(9);

    q.pop();
    q.pop();

    cout<<q.front()<<endl;
    
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

}