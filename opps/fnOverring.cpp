#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void show(int x){
        cout<<"Int: "<<x<<endl;
    }

    void show(string str){
        cout<<"String: "<<str<<endl;
    }
};

int main(){
    Print obj;
    obj.show(7);
    obj.show("dv");
    return 0;
}