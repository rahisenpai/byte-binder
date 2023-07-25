#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="6358291";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;

    // sort(s.begin(), s.end());
    // for (int i=s.length(); i>=0; i--){
    //     cout<<s[i];
    // }
    return 0;
}