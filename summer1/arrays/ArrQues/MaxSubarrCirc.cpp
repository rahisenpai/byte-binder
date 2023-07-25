#include <bits/stdc++.h>
using namespace std;
//maxm circular subarray sum, concept of wrapping and contributing elements
//if contributing elements are wrapping we follow below steps
//get non-contributing elements and subtract their sum from sum of array
//to get non-contributing elements, we reverse the signs of the elements in array and apply kadane's algo
//MaxSubarrSum = TotalArrSum - SumOfNonContributingElements

int kadane(int arr[], int n);

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int nonwrapsum = kadane(arr,n);
    int totalsum=0;
    for (int i=0; i<n; i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    int wrapsum = totalsum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}

int kadane(int arr[], int n){
    int currentSum=0, maxSum=INT_MIN;
    for (int i=0; i<n; i++){
        currentSum+=arr[i];
        if (currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    return maxSum;
}