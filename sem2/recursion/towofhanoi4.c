#include <stdio.h>

void move(int n, char src_t[], char dst[], char tmp1[], char tmp2[]) {
    //printf("%d %s %s %s %s\n", n, src_t, dst, tmp1, tmp2);
    if (n==0)
        return;
    else if (n == 1) {
        printf("moving from %s to %s\n", src_t, dst);
    }
    else {
        move(n-2, src_t, tmp1, dst, tmp2);
        printf("moving from %s to %s\n", src_t, tmp2);
        printf("moving from %s to %s\n", src_t, dst);
        printf("moving from %s to %s\n", tmp2, dst);
        move(n-2, tmp1, dst, src_t, tmp2);
    }
}

int main() {
    move(4, "T1", "T4", "T2", "T3");
    return 0;
}