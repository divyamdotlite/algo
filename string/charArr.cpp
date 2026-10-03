#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch ='d';
    int pos = ch  - 'a';
    cout<<pos<<endl;
    ch = pos+'A';
    cout<<"Upper case: "<<ch;

    return 0;
}