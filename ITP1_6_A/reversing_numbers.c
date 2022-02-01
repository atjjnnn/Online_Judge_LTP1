#include <stdio.h>

int main(void)
{
        int num;
        int i;

        scanf("%d", &num);

        int array[num];

        for (i=0; i<num; i++) {
                fflush(stdin);
                scanf("%d", &array[i]);
        }

        for (i = (i-1); i>=0; i--) {
                printf("%d", array[i]);
                if (i) printf(" ");
        }
        printf("\n");

        return 0;
}
