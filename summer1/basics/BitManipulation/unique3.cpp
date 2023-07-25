#include <iostream>
using namespace std;
//find a unique number in an array where all numbers except one, are present thrice

//what we are doing is counting the number of setbits at a position over the array of numbers
//and since they are in pair of 3, if at some position count in not multiple of 3
//that place has a setbit for the result

int getBit(int n, int pos){ //return the bit at a position
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){ //set the bit at a position to 1
    return (n | (1<<pos));
}

int unique(int arr[], int n){
    int result=0;
    for (int i=0; i<32; i++){ //32 because int size is 4 bytes or 32 bits
        int sum=0;
        for (int j=0; j<n; j++){
            if (getBit(arr[j],i)){
                sum++;
            }
        }
        if (sum%3 != 0){
            result = setBit(result,i);
        }
    }
    return result;
}

int main(){
    int arr[]={1,3,2,3,4,2,1,1,3,2};
    cout<<unique(arr,10);
    return 0;
}