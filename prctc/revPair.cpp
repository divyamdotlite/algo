class Solution {
public:
        void merge(vector<int>&arr, int st, int mid, int end){
        vector<int> temp;
        int i=st, j=mid+1;

        while(i<=mid && j<=end){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i++]);
            } else{
                temp.push_back(arr[j++]);
            }
        }

        while(i<=mid){
            temp.push_back(arr[i++]);
        }

        while(j<=end){
            temp.push_back(arr[j++]);
        }

        for(int idx=st, x=0; idx<=end; idx++){
            arr[idx] = temp[x++];
        }
    }

    int countPairs(vector<int>&arr, int st, int mid, int end){
        int right=mid+1;
        int count = 0;
        for(int i=st; i<=mid; i++){
            while(right<=end && arr[i]>(long long) 2*arr[right]){
                right++;
            }
            count+=(right-(mid+1));
        }
        return count;
    }

    int mergeSort(vector<int>&arr, int st, int end){
        if(st >= end){
            return 0;
        }

        int count = 0;
        int mid = st + (end - st)/2;

        count+=mergeSort(arr, st, mid);
        count+=mergeSort(arr, mid+1, end);
        count+=countPairs(arr, st, mid, end);
        merge(arr, st, mid, end);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};