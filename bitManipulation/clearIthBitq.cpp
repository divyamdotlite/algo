#include <iostream>
using namespace std;

void clearIthBit(int num, int i){
    int bitMask = (~0<<i);
    num = num&bitMask;
    cout<<num;
}

int main(){
    int num=15, i=2;
    clearIthBit(num,i);    
    return 0;
}