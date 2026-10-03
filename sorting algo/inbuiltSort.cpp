#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {5,4,1,3,2};
    sort(arr, arr+5);
    printArr(arr,5);
    return 0;
}