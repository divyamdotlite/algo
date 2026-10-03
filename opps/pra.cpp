#include <iostream>
#include <string>
using namespace std;

class User {
private:
    int id;
    string password;

public:
    string username;

    User(int id){
        this->id = id;
    }

    // Getter
    string getPassword(){
        return password;
    }

    // Setter
    void setPassword(string password){
        this->password = password;
    }
};

int main(){
    User user1(101);
    user1.username = "dv";
    user1.setPassword("abcd");

    cout<<user1.username<<endl;
    cout<<user1.getPassword();
    return 0;
}