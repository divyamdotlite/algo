#include <iostream>
using namespace std;

void oddOrEven(int num){
    if(!(num & 1)){
        cout<<"even";
    } else {
        cout<<"odd";
    }
}
int main(){
    int num=6;
    oddOrEven(num);
    return 0;
}