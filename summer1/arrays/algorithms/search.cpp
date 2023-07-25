#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){ //O(n)
    for (int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int n, int key){ //O(log(n))
    int start=0, end=n, mid;
    while (start<=end){
        mid = start + (end-start)/2;
        if (key>arr[mid]){
            start=mid+1;
        }
        else if (key<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key: ";
    cin>>key;

    cout<<LinearSearch(arr,n,key)<<endl;
    cout<<BinarySearch(arr,n,key)<<endl;

    return 0;
}