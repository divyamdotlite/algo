#include <iostream>
using namespace std;

int setIthBit(int num, int i){
    int bitMask = 1<<i;
    return (num|bitMask);
}

int main(){
    int num=6, i=3;
    cout<<setIthBit(num,i);
    return 0;
}