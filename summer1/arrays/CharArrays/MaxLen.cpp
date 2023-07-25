#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);

    int i=0;
    int curlen=0, maxlen=0;
    int st=0, maxst;
    while(1){
        if (arr[i]==' ' || arr[i]=='\0'){
            if (maxlen<curlen){
                maxlen=curlen;
                maxst = st;
            }
            curlen=0;
            st=i+1;
        }
        else
            curlen++;
        if (arr[i]=='\0')
            break;
        i++;
    }
    cout<<maxlen<<endl;
    for (int i=0; i<maxlen; i++){
        cout<<arr[i+maxst];
    }
}