#include <iostream>
using namespace std;
//Euclid algorithm to find gcd
//gcd of 2 numbers wont change if we subtract them or modulo them (essentially reduce the number)
//32-24=8; 24-8=16; 16-8=8; 8-8=0;
//32%24=8; 24%8=0;

int gcd(int a, int b){
    while(b!=0){
        int rem=a%b;
        a=b; b=rem;
    }
    return a;
}

int main(){
    cout<<gcd(24,32);
    return 0;
}