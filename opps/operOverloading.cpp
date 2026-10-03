#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;
public:
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    Complex operator +(Complex &obj){
        int resReal = this->real + obj.real;
        int resImg = this->img + obj.img;
        return Complex(resReal,resImg);
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1+c2;
    c3.showNum();
    return 0;
}