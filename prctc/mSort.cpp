#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int st, int mid, int end){
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }

    while(j <= end){
        temp.push_back(arr[j++]);
    }

    for(int idx=st, x=0; idx<=end; idx++){
        arr[idx] = temp[x++];
    }
}

void mergeSort(int arr[], int st, int end){
    // base case
    if(st >= end){
        return;
    }

    int mid = st + (end - st)/2;
    // merge left
    mergeSort(arr, st, mid);
    
    // merge right
    mergeSort(arr, mid+1, end);

    // merge
    merge(arr, st, mid, end);
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}