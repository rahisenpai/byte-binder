#include <bits/stdc++.h>
using namespace std;
//first repeating element in the array

int main(){
    int n=7, arr[]={1,5,3,4,3,5,6};
    const int N = 1e6;
    int idx[N], minidx=INT_MAX;
    for (int i=0; i<N; i++){
        idx[i]=-1;
    }
    for (int i=0; i<n; i++){
        if (idx[arr[i]]!=-1){
            minidx = min(minidx,idx[arr[i]]);
        }else{
            idx[arr[i]] = i;
        }
    }
    if (minidx==INT_MAX){
        cout<<"-1"<<endl;
    }else{
        cout<<minidx+1<<endl;
    }
    return 0;
}