//repeatedly swap 2 adjacent elements if they are in wrong order
//sort progresses from highest index(n-1)
//stable algorithm; space: O(1); time: O(n^2) [worst and average], O(n) [best] for optimised
#include <iostream>
using namespace std;

//n-1 iterations are required, i.e. to get indices 1 to n correct
void Bubble(int arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//it can be optimized if we break loop if there are no swaps in an iteration
void OptimizedBubble(int arr[], int n){
    for (int i=0; i<n-1; i++){
        bool swapped=false;
        for (int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if (swapped==false){
            break;
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

    // Bubble(arr,n);
    OptimizedBubble(arr,n);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}