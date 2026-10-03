#include <iostream>
using namespace std;

class bankAccount{
    int accountNumber;
    int balance = 0;
public:
    bankAccount(int accountNumber){
        this->accountNumber = accountNumber;
    }

    void deposit(int n){
        balance+=n;
    }

    void withdraw(int n){
        balance-=n;
    }

    int getBalance(){
        return balance;
    }
};

int main(){
    bankAccount dv(1234567);
    dv.deposit(51);
    cout<<dv.getBalance()<<endl;
    dv.withdraw(11);
    cout<<dv.getBalance();
    return 0;
}