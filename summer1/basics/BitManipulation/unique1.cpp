#include <iostream>
using namespace std;
//find a unique number in an array where all numbers except one, are present twice

//xor is commutative
//we do xor operation over the array so the same numbers will be 0 and unique will remain

int unique(int arr[], int n){
    int xorsum=0;
    for (int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
        cout<<xorsum<<endl;
    }
    return xorsum;
}

int main(){
    int arr[]={2,4,6,3,4,6,2};
    cout<<unique(arr,7);
    return 0;
}