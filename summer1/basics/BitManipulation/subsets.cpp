#include <iostream>
using namespace std;

//for a set of n elements, there are 2^n subsets
//2^n can be represented as (1<<n)

void subsets(int arr[], int n){
    for (int i=0; i<(1<<n); i++){
        for (int j=0; j<n; j++){
            if (i & (1<<j))
                cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3};
    subsets(arr,3);
    return 0;
}