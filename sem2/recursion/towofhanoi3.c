#include <stdio.h>

void move(int n, char src_t[], char dst_t[], char tmp_t[]) {
    //printf("%d %s %s %s\n", n, src_t, dst_t, tmp_t);
    if (n == 1) {
        printf("moving from %s to %s\n", src_t, dst_t);
    }
    else {
        move(n-1, src_t, tmp_t, dst_t);
        printf("moving from %s to %s\n", src_t, dst_t);
        move(n-1, tmp_t, dst_t, src_t);
    }
}

int main(){
    move(4, "T1", "T3", "T2");
    return 0;
}