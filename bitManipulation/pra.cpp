#include <iostream>
using namespace std;

void clearIthrange(int num, int i, int j){
    while(i<=j){
        int bitMask = ~(1<<i);
        num = num & bitMask;
        i++;
    }
    cout<<num;
}

int main(){
    int num=31, i=1, j=3;
    // clearIthrange(num,i,j);
    int x = 0^1^4; 
    cout<<x;
    return 0;
}