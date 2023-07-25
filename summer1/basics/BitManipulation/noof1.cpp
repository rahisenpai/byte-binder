#include <iostream>
using namespace std;

//bruteforce approach can be this, its time complexity is O(logn)
//rightshift and check if last digit is 1
// int count=0;
// while(n){
//     if(n & 1)
//         count++;
//     n = n>>1;
// }

//another efficient approach is this
//the concept used is the fact how n-1 is written for a given n
//we flip the bits of n from the rightmost 1(set bit)
//6:0110 and 5:0101, similarly 8:1000 and 7:0111
// n & n-1 has same bits as n except the rightmost setbit of n
//i.e., n & n-1 differ from n by the rightmost setbit of n
//eg 6&5: 0110 & 0101: 0100
//this is used to count the number if setbits(1)

int numberofones(int n){
    int count=0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<numberofones(11);
    return 0;
}