#include <stdio.h>

int power(int x, int n) {
    int pow_h;
    if (n <= 0) // one comparison operation
        return 1;
    if ((n % 3) == 0) { // one comparison operation
        pow_h = power(x, n/3);
        return pow_h * pow_h * pow_h; // 2 multiplication operation
    }
    else if ((n%3) == 1) { // one comparison operation
        pow_h = power(x, (n-1)/3);
        return x * pow_h * pow_h * pow_h; // 3 multiplication operations
    }
    else {
        pow_h = power(x, (n-2)/3);
        return x * x * pow_h * pow_h * pow_h; // 4 multiplication operations
    }
}

int main(){
    int a,b;
    printf("enter power and exponent: "); 
    scanf("%d %d",&a,&b);
    int res=power(a,b);
    printf("%d",res);
    return 0;
}