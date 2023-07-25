#include <iostream>
using namespace std;
//2d matrix but elements in ascending order
//initial point has to be top right (0,m-1) or bottom left (n-1,0)
//to get a number to compare greater and smaller sort of thing to decide where to go

int main(){
    int n,m,key;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cin>>arr[i][j];
    }
    cin>>key;

    int r=0, c=m-1;
    bool found=false;
    while (r<n && c>=0){
        if (arr[r][c]==key){
            found=true;
            break;
        }
        else if (arr[r][c]<key){
            r++;
        }else{
            c--;
        }
    }
    if (found)
        cout<<"element found";
    else
        cout<<"element not found";
    return 0;
}