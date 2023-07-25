//divide and merge
//stable algortihm; time: O(n logn) all cases; space: O(n)
#include <iostream>
using namespace std;

//way better approach than creating 2 subarrays and then merging
void merge(int arr[], int lo, int mid, int hi) {
    int idx=0, left=lo, right=mid+1;
    int temp[hi-lo+1];

    //store the elements of left and right portion in temp in increasing order
    while(left<=mid && right<=hi) {
        if (arr[left]<=arr[right]) {
            temp[idx] = arr[left];
            idx++; left++;
        }
        else {
            temp[idx] = arr[right];
            idx++; right++;
        }
    }

    //store remaining elements of any array
    while(left<=mid) {
        temp[idx] = arr[left];
        idx++; left++;
    }
    while(right<=hi) {
        temp[idx] = arr[right];
        idx++; right++;
    }

    //update original array from temp
    for(int i=lo; i<=hi; i++) {
        arr[i] = temp[i-lo];
    }
}

void mergeSort(int arr[], int lo, int hi) {
    if(lo<hi) {
        int mid = lo + (hi-lo)/2;
        mergeSort(arr, lo, mid);
        mergeSort(arr, mid+1, hi);
        merge(arr, lo, mid, hi);
    }
}

int main() {
    // int n;
    // cout<<"enter size of array: ";
    // cin>>n;
    // int arr[n];
    // cout<<"enter elements of array: ";
    // for (int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    int n=9;
    int arr[] = {5,9,2,3,6,1,8,7,4};

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}