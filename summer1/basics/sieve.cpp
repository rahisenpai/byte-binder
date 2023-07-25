#include <iostream>
using namespace std;
// Sieve of Eratosthenes : one of the most efficient ways to find all primes till n
// space: O(n); time: O(n*log(log(n)))
//this can be further improved by a constant factor if we only deal with odd numbers in the funtion

void primeSieve(int n){
    bool prime[n+1]={0}; //initialize array with 0
    for (int i=2; i*i<=n; i++){ //its more efficient than i<=n
        if (prime[i]==0){
            for (int j=i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }
    for (int i=2; i<=n; i++){
        if (prime[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    primeSieve(n);
    return 0;
}