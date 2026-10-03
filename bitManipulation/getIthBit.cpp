#include <iostream>
using namespace std;

int getIthBit(int num, int i){
    int bitMask = (1<<i);
    if(!(num&bitMask)){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    int num=6, i=2;
    // 6 = 00000110
    cout<<getIthBit(num,i);
    return 0;
}