#include <iostream>
using namespace std;

void bruteSearch(int mat[][4], int n, int m, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==key){
                cout<<"("<<i<<","<<j<<")";
                break;
            }
        }
    }
}

bool stairSearch(int mat[][4], int n, int m, int key){
    int row = 0, col = m-1;
    
    while(row<n && col>=0){
        if(mat[row][col]==key){
            cout<<"("<<row<<","<<col<<")";
            return true;
        } else if(mat[row][col] > key){
            // left
            col--;
        } else {
            // down
            row++;
        }
    }
    cout<<"Not found";
    return false;
}
int main(){
    int mat[4][4] = {{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
    stairSearch(mat,4,4,33);
    return 0;
}