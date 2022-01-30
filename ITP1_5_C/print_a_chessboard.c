#include <stdio.h>

int main(void)
{
        int height;
        int width;

        while(1) {
                fflush(stdin);
                scanf("%d %d", &height, &width);
                if (height == 0 && width == 0) {
                        break;
                }
                for (int i=0; i<height; i++) {
                        for (int j=0; j<width; j++) {
                                if ((i+j) % 2 == 0) {
                                        printf("#");
                                } else {
                                        printf(".");
                                }
                        }
                        printf("\n");
                }
                printf("\n");
        }
        return 0;
}
