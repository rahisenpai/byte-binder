#include <stdio.h>
#include <sys/time.h>

void mul(int A[2][2], int R[2][2], int n) {
    if (n == 1) {
        R[0][0] = A[0][0]; R[0][1] = A[0][1];
        R[1][0] = A[1][0]; R[1][1] = R[1][1];
        return;
    }
    if (n % 2 == 0) {
        mul(A, R, n/2);
        mul2(R, R); // R <- R * R
    }
    else {
        mul(A, R, (n-1)/2);
        mul2(R, R); // R <- R * R
        mul2(R, A); // R <- R * A
    }
}

void mul2(int A[2][2], int B[2][2]){
    int t[2][2];
    t[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0];
    t[0][1] = A[0][0]*B[0][1] + A[0][1]*B[1][1];
    t[1][0] = A[1][0]*B[0][0] + A[1][1]*B[1][0];
    t[1][1] = A[1][0]*B[0][1] + A[1][1]*B[1][1];
    A[0][0] = t[0][0];  A[0][1] = t[0][1];
    A[1][0] = t[1][0];  A[1][1] = t[1][1];
}

int fib(int n) {
if (n <= 1) {
return n;
}
int A[2][2];
int R[2][2];
A[0][0] = 1; A[0][1] = 1;
A[1][0] = 1; A[1][1] = 0;
mul(A, R, n-1);
// R contains An-1
return R[0][0]%10000;
}

int main() {
struct timeval start;
struct timeval end;
unsigned long t;
int r;
gettimeofday(&start, 0);
r = fib(100000);
gettimeofday(&end, 0);
t = ((end.tv_sec * 1000000) + end.tv_usec) -
((start.tv_sec * 1000000) + start.tv_usec);
printf("r:%d\n", r);
printf("elapsed time: %lf milliseconds\n", t/1000.0);
return 0;
}