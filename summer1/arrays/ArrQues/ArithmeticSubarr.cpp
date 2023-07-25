#include <iostream>
using namespace std;
//google kickstart question- longest arithmetic subarray (atleast 2 integers and ap)

int main(){
    int n=7, arr[]={10,7,4,6,8,10,11};
    int cd=0,pd=0,curr=2,ans=2;
    for (int i=1; i<n; i++){
        cd = arr[i]-arr[i-1];
        if (cd==pd){
            curr++;
            ans=max(ans,curr);
        } else{
            pd = cd;
            curr=2;
        }
    }
    cout<<ans<<endl;
    return 0;
}