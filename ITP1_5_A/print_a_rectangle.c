#include <stdio.h>

int main(void)
{
        int height = 0;
        int width = 0;

        while (1) {
                fflush(stdin);
                scanf("%d %d", &height, &width);
                if (height == 0 && width == 0) {
                        break;
                }
                for (int i=0; i<height; i++) {
                        for (int j=0; j<width; j++) {
                                printf("#");
                        }
                        printf("\n");

                }
                printf("\n");
        }
        return 0;
}

