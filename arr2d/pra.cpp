#include <iostream>
using namespace std;

void counter(int arr[][3], int n, int m){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==7){
                count++;
            }
        }
    }
    cout<<count;
}

void sumRow(int nums[][3], int n, int m){
    int sum = 0;
    for(int j=0; j<m; j++){
        sum+= nums[1][j];
    }
    cout<<sum;
}

void transposer(int mat[][3], int n, int m){
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[2][3]={{4,7,8},
                   {8,8,7}};
    int nums[3][3] = {{1,4,9},{11,4,3},{2,2,3}};

    int mat[2][3] = {{1,2,3},
                     {4,5,6}};
    transposer(mat,2,3);
    return 0;
}