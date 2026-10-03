#include <iostream>
using namespace std;

void diagonalMatrix(int mat[][3], int n){
    int sum = 0;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i==j){
    //             sum+= mat[i][j];
    //         }
    //         else if(j == n-i-1){
    //             sum+= mat[i][j];
    //         }
    //     }
    // }

    for(int i=0; i<n; i++){
        sum+= mat[i][i];
        if(i != n-1-i){
            sum+= mat[i][n-1-i];
        }
    }
    cout<<sum;
}

int main(){
    int mat[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    int mat2[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}};
    
    // diagonalMatrix(mat,4);
    diagonalMatrix(mat2,3);
    
    return 0;
}