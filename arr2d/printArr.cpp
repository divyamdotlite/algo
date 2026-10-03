#include <iostream>
#include <climits>
using namespace std;
void printSubArr(int *arr, int n){
    for(int start=0; start<n; start++){
            for(int end=start; end<n; end++){
                // cout<<"("<<start<<","<<end<<") ";
                for(int i = start; i<=end; i++){
                    cout<<arr[i];
                }
                cout<<", ";
            }
            cout<<endl;
    }
}

// Brute force
void maxSubArrSum(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
            for(int end=start; end<n; end++){
                int curSum = 0;
                for(int i = start; i<=end; i++){
                    curSum+=arr[i];
                }
                cout<<curSum<<", ";
                maxSum = max(maxSum, curSum);
            }
            cout<<endl;
    }
    cout<<"Max subarry sum: "<<maxSum;
}

// Optimized
void maxSubArrSum2(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        int curSum = 0;
        for(int end=start; end<n; end++){
            curSum += arr[end];
            maxSum = max(maxSum, curSum);
        }
    }
    cout<<"Max subarry sum: "<<maxSum;
}

void maxSubArrSum3(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Max subarray sum: "<<maxSum<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    maxSubArrSum3(arr,n);
    return 0;
}