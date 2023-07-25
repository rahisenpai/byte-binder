//code doesnt work on some cases
#include <iostream>
using namespace std;

int main() {
    int a,b,ans=0,carry=0,res=0;
    cin>>a>>b;

    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            res = res*10 + carry;
            carry=0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
            if(carry==0){
                res = res*10 + 1;
                carry=0;
            }
            else{
                res = res*10 + 0;
                carry=1;
            }
        }
        else{
            res = res*10 + carry;
            carry=1;
        }
        a/=10; b/=10;
    }

    while(a>0){
        if(carry=1){
            if(a%10==1){
                res = res*10 + 0;
                carry=1;
            }
            else{
                res = res*10 + 1;
                carry=0;
            }
        }
        else{
            res = res*10 + a%2;
        }
        a/=10;
    }
    while(b>0){
        if(carry=1){
            if(b%2==1){
                res = res*10 + 0;
                carry=1;
            }
            else{
                res = res*10 + 1;
                carry=0;
            }
        }
        else{
            res = res*10 + b%2;
        }
        b/=10;
    }

    if (carry==1){
        res = res*10 + 1;
    }
    while(res>0){
        int x=res%10;
        ans = ans*10 + x;
        res/=10;
    }
    cout<<ans<<endl;
    return 0;
}