#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"enter n1, n2 & n3 resp: ";
    cin>>n1>>n2>>n3;
    int a1[n1][n2], a2[n2][n3], ans[n1][n3];
    cout<<"enter first matrix"<<endl;
    for (int i=0; i<n1; i++){
        for (int j=0; j<n2; j++)
            cin>>a1[i][j];
    }
    cout<<"enter second matrix"<<endl;
    for (int i=0; i<n2; i++){
        for (int j=0; j<n3; j++)
            cin>>a2[i][j];
    }

    for (int i=0; i<n1; i++){
        for (int j=0; j<n3; j++){
            int temp=0;
            for (int k=0; k<n2; k++)
                temp += a1[i][k]*a2[k][j];
            ans[i][j]=temp;
        }
    }
    cout<<"product matrix is"<<endl;
    for (int i=0; i<n1; i++){
        for (int j=0; j<n3; j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}