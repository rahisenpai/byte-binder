//find(select) min element in unsorted array and swap it with first element of unsorted array
//sort progresses from lowest index(0)
//unstable algorithm; space: O(1); time: O(n^2) [all cases]
#include <iostream>
using namespace std;

//unstable algorithm because of swapping, i.e. same elements may not have same order as unsorted after sort
void Selection(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min=i;
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        if (min!=i){
            swap(arr[i],arr[min]);
        }
    }
}

//we shift elements one step forward and place min element in its position instead of swap
void StableSelection(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min=i;
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        if (min!=i){
            // swap(arr[i],arr[min]);
            int temp = arr[min];
            for (int j=min; j>i; j--){
                arr[j]=arr[j-1];
            }
            arr[i]=temp;
        }
    }
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

    // Selection(arr,n);
    StableSelection(arr,n);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}