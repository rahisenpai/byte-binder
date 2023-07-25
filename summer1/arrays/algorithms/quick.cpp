//choose a pivot and place it in its coorect order in array, i.e. 
//smaller elements on left of pivot and larger elements on right of pivot
//unstable algorithm; time: O(n logn) [best and average], O(n^2) [worst]; space: O(1)
#include <iostream>
using namespace std;

int partitionAscLow(int arr[], int lo, int hi) {
    int pivot = arr[lo];
    int i=lo, j=hi;

    //think of i,j as l,r and get correct position of pivot
    while(i<j) {
        //<= because we want similar elements in same subarr that has pivot, here low and left
        while(arr[i]<=pivot && i<hi) { //i<hi or i<=hi-1 to ensure you dont cross array bounds
            i++;
        }
        while(arr[j]>pivot && j>lo) { //j>lo or j>=lo+1 to ensure you dont cross array bounds
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    //swap pivot to its correct position
    swap(arr[lo], arr[j]);
    return j;
}

int partitionAscHigh(int arr[], int lo, int hi) {
    int pivot = arr[hi];
    int i=lo, j=hi;

    //think of i,j as l,r and get correct position of pivot
    while(i<j) {
        //take example and see when you get correct answer
        while(arr[i]<pivot && i<hi) { //i<hi or i<=hi-1 to ensure you dont cross array bounds
            i++;
        }
        //>= because we want similar elements in same subarr that has pivot, here high and right
        while(arr[j]>=pivot && j>lo) { //j>lo or j>=lo+1 to ensure you dont cross array bounds
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    //swap pivot to its correct position
    swap(arr[hi], arr[i]);
    return i;
}

int partitionDesLow(int arr[], int lo, int hi) {
    int pivot = arr[lo];
    int i=lo, j=hi;

    //think of i,j as l,r and get correct position of pivot
    while(i<j) {
        //>= so that i moves ahead and doesn't change lo; take example of 5,9,2,3,6
        //>= because we want similar elements in same subarr that has pivot, here low and left
        while(arr[i]>=pivot && i<hi) { //i<hi or i<=hi-1 to ensure you dont cross array bounds
            i++;
        }
        while(arr[j]<pivot && j>lo) { //j>lo or j>=lo+1 to ensure you dont cross array bounds
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    //swap pivot to its correct position
    swap(arr[lo], arr[j]);
    return j;
}

int partitionDesHigh(int arr[], int lo, int hi) {
    int pivot = arr[hi];
    int i=lo, j=hi;

    //think of i,j as l,r and get correct position of pivot
    while(i<j) {
        //take example and see when you get correct answer
        while(arr[i]>pivot && i<hi) { //i<hi or i<=hi-1 to ensure you dont cross array bounds
            i++;
        }
        //<= because we want similar elements in same subarr that has pivot, here high and right
        while(arr[j]<=pivot && j>lo) { //j>lo or j>=lo+1 to ensure you dont cross array bounds
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    //swap pivot to its correct position
    swap(arr[hi], arr[i]);
    return i;
}

void quickSort(int arr[], int lo, int hi) {
    if(lo<hi) {
        int pIndex = partitionAscHigh(arr, lo, hi);
        quickSort(arr, lo, pIndex-1);
        quickSort(arr, pIndex+1, hi);
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

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}