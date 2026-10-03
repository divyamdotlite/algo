#include <iostream>
using namespace std;

void ascPrint(int n){
    if(n==0){
        return;
    }
    ascPrint(n-1);
    cout<<n<<" ";
}

int main(){
    ascPrint(5);
    return 0;
}