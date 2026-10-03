#include <iostream>
using namespace std;

int search(int arr[], int si, int ei, int tar){
    if(si>ei){
        return -1;
    }

    int mid = si+(ei-si)/2;
    
    if(arr[mid] == tar){
        return mid;
    }

    if(arr[si]<=arr[mid]){ //left sorted

        if(arr[si]<=tar && tar<=arr[mid]){ //left half
            return search(arr,si,mid-1,tar);
        } else { //right half
            return search(arr,mid+1,ei,tar);
        }
        
    } else { //right sorted

        if(arr[mid]<=tar && tar>=arr[ei]){ //right half
            return search(arr,mid+1,ei,tar);
        } else { // left half
            return search(arr,si,mid-1,tar);
        }

    }
}

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    int tar = 0;
    int si = 0, ei = n-1;
    cout<<search(arr,si,ei,tar);
}