#include <iostream>
using namespace std;

void funcInt(){
    int *ptr = new int;
    *ptr = 5;
    cout<<*ptr;
    delete ptr;
}

void funcArr(){
    int size;
    cin>>size;
    int *ptr = new int[size];

    int x=0;
    for(int i=0; i<size; i++){
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }
    cout<<endl;
    delete [] ptr;
}

int main(){
    int rows, cols;
    cout<<"enter rows: ";
    cin>>rows;
    cout<<"enter cols: ";
    cin>>cols;

    int **matrix = new int*[rows];

    for(int i=0; i<rows; i++){
        matrix[i] = new int[cols];
    }

    int x=1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}