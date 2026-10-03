#include <iostream>
using namespace std;

void decPrint(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decPrint(n-1);
}

int main(){
    decPrint(5);
    return 0;
}