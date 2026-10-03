#include <iostream>
using namespace std;

void printArr(int list[], int n){
    for(int i=0; i<n; i++){
        cout<<list[i];
        if(i<n-1){
            cout<<",";
        }
        else{
            cout<<endl;
        }
    }
}

int linearSearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binSearch(int *arr, int n, int key){
    int st = 0, end = n-1;

    while(st <= end){
        int mid = (st + end)/2;
        if(arr[mid] == key){
            cout<<mid;
            return mid;
        }
        else if(arr[mid] < key){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    /*Input and Output*/
    // int arr[5];
    // int n = sizeof(arr)/sizeof(int);
    
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    /*Find the largest number*/
    // int arr[] = {4,6,7,9,8};
    // int n = sizeof(arr) / sizeof(int);
    // int max = arr[0];
    // int min = arr[0];
    // for(int i=0; i<n; i++){
    //     if (arr[i] > max){
    //         max = arr[i];
    //     }
    //     if (arr[i] < min){
    //         min = arr[i];
    //     }
    // }
    // cout<<"Max value: "<<max;
    // cout<<endl; 
    // cout<<"Min value: "<<min;

    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(int);
    // printArr(arr,n);
    // cout<<linearSearch(arr,n,44);
    
    // int copyArr[n];
    // for(int i=0; i<n; i++){
    //     int j = n-1-i;
    //     copyArr[i] = arr[j];
    // }
    // for(int i=0; i<n; i++){
    //     arr[i] = copyArr[i];
    // }
    // printArr(arr,n);

    // int start=0, end=n-1;
    // while(start < end){
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    // printArr(arr,n);
    // binSearch(arr, n, 4);

    int a = 7;
    int *ptr = &a;

    cout<<ptr<<endl;

    ptr++;
    cout<<ptr<<endl;
    
    ptr--;
    cout<<ptr<<endl;

    return 0;
}