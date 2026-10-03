#include <iostream>
using namespace std;

int tilingProblem(int n){
    if(n==0||n==1){
        return 1;
    }
    return tilingProblem(n-1) + tilingProblem(n-2);
}

int main(){
    cout<<tilingProblem(1)<<endl;
    cout<<tilingProblem(2)<<endl;
    cout<<tilingProblem(3)<<endl;
    cout<<tilingProblem(4)<<endl;
    cout<<tilingProblem(5)<<endl;
    return 0;
}