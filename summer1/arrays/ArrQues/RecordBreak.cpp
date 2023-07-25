#include <iostream>
using namespace std;
//google kickstart question: basic question, required time effieciency

int main(){
    int n, mx=-1, ans=0;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n+1];
    cout<<"enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr[n] = -1;

    for (int i=0; i<n; i++){
        if (arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx,arr[i]);
    }
    return 0;
}