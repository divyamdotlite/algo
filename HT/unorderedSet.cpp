#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(1);
    cout<< s.size()<< endl;

    s.erase(5);
    if(s.find(5)!=s.end()) {
        cout << "exists";
    } else {
        cout << "not exists";
    }
    return 0;
}