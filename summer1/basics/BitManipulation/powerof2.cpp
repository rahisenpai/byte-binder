#include <iostream>
using namespace std;

//the concept used is the fact how n-1 is written for a given n
//we flip the bits of n from the rightmost 1(set bit)
//6:0110 and 5:0101, similarly 8:1000 and 7:0111
// n & n-1 has same bits as n except the rightmost setbit of n
//i.e., n & n-1 differ from n by the rightmost setbit of n
//eg 6&5: 0110 & 0101: 0100

//so if n is any power of 2, its bitwise and operation with n-1 will give zero
//in this approach corner case is when n=0, its bitwise and with -1 didnt make sense and gives wrong answer

int ispowerof2(int n){
    //corner case handled, if n=0 returns 0 because of &&(and)
    return (n && !(n & n-1));
}

int main(){
    cout<<ispowerof2(0);
    return 0;
}