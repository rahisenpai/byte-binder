#include <iostream>
using namespace std;

//second part can be done easily by changing loop parameters in the first part, i.e. start,end,step
//even easier if you handle whitespaces outside loops (and take end of nested loop as i)

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        for(int j=1; j<=n; j++){
            if(j>n-i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i+1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        for(int j=1; j<=n; j++){
            if(j>=i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}