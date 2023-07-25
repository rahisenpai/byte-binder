#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"prime numbers are ";
    for(int i=a; i<=b; i++){
        int j,end=pow(i,0.5);
        for(j=2; j<=end; j++){
            if (i%j==0){
                break;
            }
        }
        if (j>end){
            cout<<i<<" ";
        }
    }
    return 0;
}