#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
        if(i<n-1){ 
            cout<<", ";
        }
        else{
            cout<<endl;
        }
    }
}

bool distinctElement(int *nums, int n){
    int freq[100000];
    for(int i=0; i<n; i++){
        freq[nums[i]]++;
    }
    for(int j=0; j<n; j++){
        if(freq[j]>=2){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int n=2, m=3;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}