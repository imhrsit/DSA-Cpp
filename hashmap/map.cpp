#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, int> m;
    
    //insertion
    //1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string, int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;
    m["mera"] = 2;

    //search
    cout<< m["mera"] <<endl;
    cout<< m.at("babbar") <<endl;

    cout<< m["unknown"] <<endl;
    cout << m.at("unknown") << endl;

    //size
    cout << m.size() << endl;

    //check presence
    cout<< m.count("mera") <<endl;

    //erase
    m.erase("love");
    cout<< m.size() <<endl;

    //iterator
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

}