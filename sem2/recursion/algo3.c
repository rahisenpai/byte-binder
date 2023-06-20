#include <stdio.h>
#include <sys/time.h>
int fib(int n) {
if (n == 0 || n == 1) {
return n;
}
int prev = 1;
int pprev = 0;
int res, i;
for (i = 2; i <= n; i++) {
res = (prev + pprev)%10000;
pprev = prev;
prev = res;
}
return res;
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