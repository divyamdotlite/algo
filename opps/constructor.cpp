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
};

int main(){
    Car c1; // No {params}
    Car c2("sexy", "white");
    cout<<c2.getName();
    return 0;
}