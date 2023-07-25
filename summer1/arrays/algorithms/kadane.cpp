//subarray with largest sum
//based on cumulative sum approach
//we update cumulative sum to 0 if it is negative at some index
//Time complexity: O(n), Space complexity: O(1)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int currentSum=0, maxSum=INT_MIN;
    for (int i=0; i<n; i++){
        currentSum+=arr[i];
        if (currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
    return 0;
}