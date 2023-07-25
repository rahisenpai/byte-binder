#include <bits/stdc++.h>
using namespace std;
//an efficient implementation to find exponent of a number
//can be optimized if you break it further down to 3,4...

long long power(int a, int x){
    if (x==0){
        return 1;
    }
    if (x%2==0){
        int res=power(a,x/2);
        return res*res;
    }
    else{
        int res=power(a,x/2);
        return a*res*res;
    }
}

int main(){
    cout<<power(2,30);
    return 0;
}