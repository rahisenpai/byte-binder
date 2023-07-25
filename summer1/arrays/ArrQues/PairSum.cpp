#include <bits/stdc++.h>
using namespace std;
//check if there exists 2 elements in array that equals the given sum
//easy with O(n^2) soln, but here we are trying to do it in O(n) time
//2 pointer solution approach
//firstly sort the array, high & low on last & first index respectively
//check their sum and move pointers accordingly

bool pairsum(int arr[], int n, int k){
    int lo=0, hi=n-1;
    while (lo<hi){
        if (arr[lo]+arr[hi] < k){
            lo++;
        }
        else if (arr[lo]+arr[hi] > k){
            hi--;
        }
        else{
            cout<<lo<<" "<<hi<<endl;
            return true;
        }
    }
    return false;
}

int main(){
    int k=31, arr[]={2,4,7,11,14,16,20,21};
    cout<<pairsum(arr,8,k)<<endl;
    return 0;
}