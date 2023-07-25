#include <bits/stdc++.h>
using namespace std;
//check if an array is sorted or not
//ok so i didn't think it'd work but it is
//so even if once condition fails, false is returned to all functions in the stack

bool CheckSort (int arr[], int n){
    if (n<2){
        return true;
    }
    if (arr[n]>arr[n-1]){
        if (CheckSort(arr, n-1)){
            return true;
        }
    }
    else{
        return false;
    }
}

//the solution in the video; ig my solution is efficient(faster) xD
bool sorted(int arr[], int n){
    if (n==1){
        return true;
    }
    bool restArray = sorted(arr+1, n-1); //arr+1 passes the array pointer to next element
    return (arr[0]<arr[1] && restArray);
}

int main(){
    int arr[] = {1,2,3,5,4,7,8,9};
    cout<<CheckSort(arr,9);
    return 0;
}