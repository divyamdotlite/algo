#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    // Properties or Attributes
    string name;
    float cgpa;

    // Method
    void getPercentage() {
        cout<<(cgpa*10)<<"%\n";
    }
};

int main() {
    Student s1; //object
    s1.name = "dv";
    s1.cgpa = 7;
    s1.getPercentage();
    return 0;
}