#include <bits/stdc++.h>
using namespace std;
//print till n in increasing/decreasing order

void increas(int n){
    if (n<1){
        return;
    }
    increas(n-1);
    cout<<n<<" ";
}

void decreas(int n){
    if (n<1){
        return;
    }
    cout<<n<<" ";
    decreas(n-1);
}

int main(){
    int n = 7;
    increas(n);
    cout<<endl;
    decreas(n);
    return 0;
}