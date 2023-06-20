/*#include <stdio.h>
#include <sys/time.h>

struct cache_entry {
    long long int key;
    long long int val;
};

int num_calls = 0;
struct cache_entry cache[1];

long long int fib(long long int n) {
    num_calls++;
    // BLOCK-1: add some code here 
    if (n== cache[0].key)
        return cache[0].val;

    if (n == 0 || n == 1)
        return n;
    long long int r1 = fib(n-1);
    long long int r2 = fib(n-2);
    long long int r = (r1 + r2) % 10000;
    // BLOCK-2: add some code here.
    cache[0].key = n-1;
    cache[0].val = r1;

    return r;
}

int main(){
    struct timeval start;
    struct timeval end;
    unsigned long t;
    long long int r,c=100000;

    gettimeofday(&start, 0);
    r = fib(c);
    gettimeofday(&end, 0);
    t = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);
    printf("r:%lld\n", r);
    printf("elapsed time: %lf milliseconds\n", t/1000.0);
    //printf("y:%d\n", num_calls);
    return 0;
}*/

/*#include <stdio.h>
#include <sys/time.h>
//#pragma pack(1)

struct cache_entry {
    long long int   key;
    long long int   val;
};

int num_calls = 0;
struct cache_entry cache[1];

long long int fib(long long int  n) {
    num_calls++;
    if (n == cache[0].key)
        return cache[0].val;

    if (n == 0 || n == 1)
        return n;
    long long int  r1 = fib(n-1)%10000;
    long long int  r2 = fib(n-2)%10000;
    
    long long int  r = (r1 + r2) % 10000;
    //printf("%lld\n",r);
    cache[0].key = n-1;
    cache[0].val = r1;
    return r;
}

int main(){
    struct timeval start;
    struct timeval end;
    unsigned long   t;
    long long int  r;

    gettimeofday(&start, 0);
    long long int c=32000;
    r = fib(c);
    gettimeofday(&end, 0);
    t = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);
    printf("r:%lld\n", r);
    printf("elapsed time: %lf milliseconds\n", t/1000.0);
    //printf("y:%d\n", num_calls);
    return 0;
}*/

#include <stdio.h>
#include <sys/time.h>
struct cache_entry {
int key;
int val;
};
int num_calls = 0;
struct cache_entry cache[1];
int fib(int n) {
num_calls++;
if (n == cache[0].key){
    return cache[0].val;}
if (n == 0 || n == 1){
return n;}
int r1 = fib((n-1)%10000);
int r2 = fib((n-2)%10000);
int r = (r1 + r2)%10000;
cache[0].key = n-1;
cache[0].val = r1;
return r;
}
int main() {
struct timeval start;
struct timeval end;
unsigned long t;
int r;
gettimeofday(&start, 0);
r = fib(500000);
gettimeofday(&end, 0);
t = ((end.tv_sec * 1000000) + end.tv_usec) -
((start.tv_sec * 1000000) + start.tv_usec);
printf("r:%d\n", r);
printf("elapsed time: %lf milliseconds\n", t/1000.0);
return 0;
}