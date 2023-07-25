#include <iostream>
using namespace std;
//find 2 unique numbers in an array where all numbers except two, are present twice

//xor is commutative
//we do xor operation over the array so the same numbers will be 0 and xor of 2 uniques will remain
//now we check the rightmost setbit in the xorsum
//and we know that one of the unique numbers had a 1 at that place
//and then we do xorsum over the numbers in array where there is 1 at that position
//this gives us one of the unique numbers
//now for second unique number, we get it if we xor the two xorsums

int getBit(int n, int pos){ //return the bit at a position
    return ((n & (1<<pos))!=0);
}

void unique(int arr[], int n){
    int xorsum=0;
    for (int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }

    int tempxor=xorsum;
    int setbit=0,pos=0;
    while (setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor=0;
    for (int i=0; i<n; i++){
        if (getBit(arr[i],pos-1)){
            newxor = newxor ^ arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(tempxor ^ newxor)<<endl;
}

int main(){
    int arr[]={2,4,6,7,4,5,6,2};
    unique(arr,8);
    return 0;
}