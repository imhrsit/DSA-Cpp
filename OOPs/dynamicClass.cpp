#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    public:
    char name[50];
    char level;
    static int timeToComp;

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

int Hero::timeToComp = 5;

int main(){
    cout<<Hero::timeToComp<<endl; 
    //static allocation
    Hero a;
    cout<< a.level <<endl;
    cout<< a.getHealth() <<endl;
    // dynamic allocation of class
    Hero *b = new Hero;
    cout<< b->level <<endl;
    cout<< b->getHealth() <<endl;

    return 0;
}