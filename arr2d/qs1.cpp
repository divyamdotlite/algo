#include <iostream>
#include <vector>
using namespace std;

int main(){
    // int nums[][3]={{1,4,9},{8,4,3},{2,2,3}};
    // int n=3, m=3;
    // for(int j=0; j<m; j++){
    //     for(int i=0; i<n; i++){
    //         cout<<nums[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row=2, col=3;
    // int mat[][col] = {{2,3,7},{5,6,7}};

    // // transpose the matrix
    // int transpose[col][row] = {{0}};
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         transpose[j][i] = mat[i][j];
    //     }
    // }

    // // print
    // for(int i=0; i<col; i++){
    //     for(int j=0; j<row; j++){
    //         cout<<transpose[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int mat[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int n = 3;
    // int newMat[][n] = {{0}};
    // // Rotate Img
    // for(int j=0; j<n; j++){
    //     for(int i=n-1; i>=0; i--){
    //         cout<<mat[i][j]<<" ";
    //     }
    // }
    
    int arr[] = {1,2,3,4};
    int n=4, m=1;

    int newArr[n][m] = {{0}};
    int idx = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            newArr[i][j] = arr[idx];
            idx++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<< newArr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}