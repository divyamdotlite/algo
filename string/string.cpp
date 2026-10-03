#include <iostream>
#include <string>
using namespace std;

int main(){
    // string str;
    // getline(cin,str,'.');
    // cout <<str;/

    // string str = "hello world";
    // for(int i=0; i<str.length(); i++){
    //     cout<<str[i]<<endl;
    // }
    // for(char ch:str){
    //     cout<<ch<<" ";
    // }

    string str = "hello";
    cout<< str.length();
    cout<< str.at(1);
    cout<< str.substr(1,2);
    cout<< str.find("e");
    return 0;
}