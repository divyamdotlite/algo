#include <iostream>
using namespace std;

bool isPowerOf2(int num){
    if(!(num&(num-1))){
        return true;
    } else {
        return false;
    }
}

int main(){
    int num = 4;
    cout<<isPowerOf2(num);
    return 0;
}