#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end){
    vector<int> temp;
    int i = st;
    int j = mid+1;
    int invCount = 0;
    
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            // arr[j] < arr[i]
            temp.push_back(arr[j]);
            j++;
            invCount += (mid-i+1);
        }
    }
    
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=st, x=0; idx<=end; idx++){
        arr[idx] = temp[x++];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int st, int end){
    if(st >= end){
        return 0;
    }

    int mid = st + (end - st)/2;

    int leftCount = mergeSort(arr, st, mid);
    int rightCount = mergeSort(arr, mid+1, end);
    int mergeCount = merge(arr, st, mid, end);

    int invCount = leftCount + rightCount + mergeCount; 
    return invCount;
}

int main(){
    vector<int> arr = {6, 3, 5, 2, 7};

    int ans = mergeSort(arr, 0, arr.size()-1);
    cout << "Inversion Count : " << ans << endl;
    return 0;
}