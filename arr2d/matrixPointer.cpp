#include <iostream>
using namespace std;
void matrixPointer(int mat[][4], int n, int m){
    cout<< mat+1<<endl;
    cout<< *(mat+1)<<endl;
    cout<< *(mat+1)+3<<endl;
    cout<< *(*(mat+1)+2)<<endl;
}
int main(){
    int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    matrixPointer(mat,4,4);
    return 0;
}