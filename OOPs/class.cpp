#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    public:
    char name[50];
    char level;

    //getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    //setter
    void setHealth(int h){
            health = h; 
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    //creation of object
    Hero paul;

    paul.setHealth(100);
    paul.level = 'A';
    strcpy(paul.name, "Logan Paul");
    

    cout<<"name: "<<paul.name<<endl;
    cout<<"health: "<< paul.getHealth() <<endl;
    cout<<"level: "<<paul.level<<endl;

    // cout<<sizeof(paul)<<endl;

    return 0;
}