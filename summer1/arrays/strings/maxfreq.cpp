#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="dhfagjfkbsjadkfb";
    int freq[26];
    for (int i=0; i<26; i++)
        freq[i]=0;

    for (int i=0; i<s.length(); i++){
        freq[s[i]-'a']++;
    }
    char ans;
    int count=0;
    for (int i=0; i<26; i++){
        if (freq[i]>count){
            count=freq[i];
            ans='a'+i;
        }
    }
    cout<<ans<<" "<<count<<endl;
    return 0;
}