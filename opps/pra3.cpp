#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    Person(string n, int a){
        name = n;
        age = a;
    }
};

class Student: public Person{
private:
    string studentID;
public:
    Student(string n, int a, string id): Person(n,a){
        studentID = id;
    }
    void displayStudentInfo(){
        cout<<"Id: "<<this->studentID<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
    }
};

int main(){
    Student std("dv", 18, "1234567890");
    std.displayStudentInfo();
    return 0;
}