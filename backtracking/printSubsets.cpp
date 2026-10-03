#include <iostream>
#include <string>
using namespace std;

void printSubsets(string str, string subset){
    if(str.size()==0){
        cout<<subset<<"\n";
        return;
    }
    char ch = str[0];

    //Y
    printSubsets(str.substr(1,str.size()-1), subset+ch);
    
    //N
    printSubsets(str.substr(1,str.size()-1), subset);
}

int main(){
    string str = "abc";
    printSubsets(str,"");
    return 0;
}