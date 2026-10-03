#include <iostream>
using namespace std;

void updateIthBit(int num, int i, int val){
    num = num & ~(1<<i);
    num = num|(val<<i);
    cout<<num;
}
int main(){
    int num=7, i=2, val=0;
    // int num=7, i=3, val=1;

    updateIthBit(num,i,val);
    return 0;
}