#include <stdio.h>

int main() {
    char cmd[50];
    int a, b,i, c, ans = 0;
    while(i<1) {
        if(scanf( "%d+%d=%d", &a, &b, &c) == 3) {
            if(a+b == c)
                ans++;
        }
        if(scanf("%d-%d=%d", &a, &b, &c) == 3) {
            if(a-b == c)
                ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
