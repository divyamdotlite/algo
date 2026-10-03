#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(1);
    cout<< s.size()<< endl;

    s.erase(5);
    if(s.find(5)!=s.end()) {
        cout << "exists" << endl;
    } else {
        cout << "not exists" << endl;
    }

    for(auto el : s) {
        cout << el;
    }
    return 0;
}