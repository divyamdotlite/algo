#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        string name;
        int *mileage;
    Car(string name){
        this->name = name;
        mileage = new int;
        *mileage = 12;
    }

    // Car(Car &original){
    //     cout<<"copying original to new..\n";
    //     name = original.name;
    //     mileage = original.mileage;
    // }

    Car(Car &original){
        cout<<"copying original to new..\n";
        name = original.name;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car(){
        if(mileage!=NULL){
            delete mileage;
            mileage = NULL;
        }
    }
};

int main(){
    Car c1("BMW");
    Car c2(c1);

    *c2.mileage=10;
    cout<<*c1.mileage<<endl;
    return 0;
}