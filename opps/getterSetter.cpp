#include <iostream>
#include <string>
using namespace std;


class Student {
    string name;
public:
    float cgpa;

    void getPercentage(){
        cout<<(cgpa*10)<<"%\n";
    }

    // Getter
    string getName() {
        return name;
    }

    // Setter
    void setName(string name) {
        this->name = name;
    }
};

int main(){
    Student s1;
    s1.setName("dv");
    cout<<s1.getName();
    return 0;
}