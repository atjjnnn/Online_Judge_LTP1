#include <stdio.h>

int main(void)
{
    int a[100];
    int x;
    int cnt = 0;
    while (1) {
        scanf("%d", &x);
        if (x == 0) break;
        printf("Case %d: %d\n", cnt+1, x);
        cnt++;
    }

    return 0;
}
