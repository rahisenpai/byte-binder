#include <bits/stdc++.h>
using namespace std;
//subarray with maximum sum O(n^2)
//refer to kadane algo for O(n) soln with cumulative sum approach

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum=0, maxsum=INT_MIN;
    for (int i=0; i<n; i++){
        sum=0;
        for (int j=i; j<n; j++){
            sum+=arr[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum<<endl;
    return 0;
}