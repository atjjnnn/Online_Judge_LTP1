#include <stdio.h>

int main(void)
{
    int a, b, temp;
    
    while(1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            break;
        } else if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
