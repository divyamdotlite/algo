#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;

    m["China"] = 150;
    m["UK"] = 70;
    m["India"] = 50;

    cout << m["China"] << endl;
    m["India"] = 100;

    for(pair<string,int> country : m) {
        cout << country.first << ", " << country.second << endl;
    }

    m.erase("India");

    if(m.count("India")) {
        cout << "exists";
    } else {
        cout << "not exists";
    }
    return 0;
}