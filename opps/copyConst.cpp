#include <iostream>
#include <string>
using namespace std;

class Car{
    string name;
    string color;
public:
    Car(){
        cout<<"const without params\n";
    }

    Car(string name, string color){
        cout<<"const with params\n";
        this->name = name;
        this->color = color;
    }

    void start(){
        cout<<"car started\n";
    }

    void stop(){
        cout<<"car stopped\n";
    }

    // Getter
    string getName(){
        return name;
    }

    // custum copy constructor
    Car (Car &original){
        cout<<"copying..\n";
        name = original.name;
    }
};

int main(){
    Car c1("sexy", "white");
    Car c2(c1);
    cout<<c2.getName();
    return 0;
}