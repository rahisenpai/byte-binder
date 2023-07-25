#include <iostream>
using namespace std;
// 5: 0 1 0 1
//pos:3 2 1 0

int getBit(int n, int pos){ //return the bit at a position
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){ //set the bit at a position to 1
    return (n | (1<<pos));
}

int clearBit(int n, int pos){ //set the bit at a position to 0
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n, int pos, int value){ //update the bit at a position
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main(){
    cout<<getBit(5,2)<<endl; //1
    cout<<setBit(5,1)<<endl; //0111
    cout<<clearBit(5,1)<<endl; //0101
    cout<<updateBit(5,1,1)<<endl; //0111
    cout<<updateBit(5,1,0)<<endl; //0101
    return 0;
}