#include <iostream>
using namespace std;

int clearIthBit(int num, int i){
    int bitMask = ~(1<<i);
    return num&bitMask;
}

int main(){
    int num=6, i=1;
    cout<<clearIthBit(num,i);
    return 0;
}