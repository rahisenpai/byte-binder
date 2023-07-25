#include <iostream>
using namespace std;
//we can print sums only in 2 loops if we increment temp in second loop
//if you dont understand this after a long time, yes printing sum take 2 loops and subarrays takes 3
//use 2 pointer approach for optimized performance

int main(){
    int n=3, arr[]={1,2,2};
    int sum=0, temp;
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            temp=0;
            for (int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
                temp+=arr[k];
            }
            cout<<"- "<<temp<<endl;
            sum+=temp;
        }
    }
    cout<<sum<<endl;
    return 0;
}