/* ITP1_7_B */

#include <stdio.h>

int main(void)
{
    int n, x;
    int i, j, k;
    int output = 0;

    while(1) {
        output = 0;
        scanf("%d %d", &n, &x);

        if (n == 0 && x == 0) {
            break;
        }

        for (i = 1; i <= n; i++) {
            for (j = i + 1; j <= n; j++) {
                for (k = j + 1; k <= n; k++) {
                    if (i + j + k == x) {
                        output++;
                    }
                }
            }
        }
        printf("%d\n", output);
    }
    return 0;
}
