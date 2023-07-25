#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1="AbCdEfGh";
    int end=s1.length();

    //upper case
    for (int i=0; i<end; i++){
        if (s1[i]>='a' && s1[i]<='z')
            s1[i]-=32;
    }
    cout<<s1<<endl;

    //lower case
    for (int i=0; i<end; i++){
        if (s1[i]>='A' && s1[i]<='Z')
            s1[i]+=32;
    }
    cout<<s1<<endl;

    //inbuilt function
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout<<s1<<endl;
    return 0;
}