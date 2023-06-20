#include<stdio.h>
#include<sys/time.h>

void fib(int n, int r[]){
    if (n==1){
        r[1]=1;
        r[0]=0;
    }
    else{
    fib(n-1,r);
    int temp = r[0];
    r[0]=r[1];
    r[1]=(temp+r[1])%10000;}
}

int main() {
struct timeval start;
struct timeval end;
unsigned long t;
int result[2];
gettimeofday(&start, 0);
fib(100000,result);
gettimeofday(&end, 0);
t = ((end.tv_sec * 1000000) + end.tv_usec) -
((start.tv_sec * 1000000) + start.tv_usec);
printf("r:%d\n", result[0]);
printf("elapsed time: %lf milliseconds\n", t/1000.0);
return 0;
}