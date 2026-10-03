#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "axxyyb";
    int idx = s.find("xy");
    cout <<  idx << endl;
    string ans = s.substr(0, idx) + s.substr(idx + 2);
    cout << ans;
    return 0;
}