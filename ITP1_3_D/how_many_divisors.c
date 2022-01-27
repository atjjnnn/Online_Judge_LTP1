#include <stdio.h>

int main(void)
{
    int a, b, c;
    int cnt = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    for (int i=a; i<b+1; i++) {
        if ((c % i) == 0) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
