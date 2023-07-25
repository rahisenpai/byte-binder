#include <iostream>
using namespace std;
//return the indices of a subarray with a given sum
//2 pointer o(n) soln

int main(){
    int n,s;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"type sum s: ";
    cin>>s;

    int i=0, st=0, en=0, sum=0;
    while(sum+arr[i]<=s && i<n){
        sum+=arr[i];
        en++; i++;
    }
    if (sum==s){
        cout<<st+1<<" "<<en<<endl;
        return 0;
    }
    while(i<n){
        sum+=arr[i];
        while(sum>s){
            sum-=arr[st];
            st++;
        }
        if(sum==s){
            st++;
            en=i+1;
            break;
        }
        i++;
    }
    cout<<st<<" "<<en<<endl;

    return 0;
}