#include <iostream>
using namespace std;

class Base {
public:
    virtual void print(){
        cout<<"base";
    }
};

class Derived: public Base {
public:
    void print() override{
        cout<<"derived";
    }
};

int main(){
    Base* b = new Derived();
    b->print();
    delete b;
    return 0;
}