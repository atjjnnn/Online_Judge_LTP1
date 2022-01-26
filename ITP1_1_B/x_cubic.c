#include <stdio.h>

int main(void)
{
    int i = 3;
    int input;
    int output = 1;
    
    scanf("%d", &input);
    
    while(i != 0) {
        output = output * input;
        i--;
    }
    
    printf("%d\n", output);
    return 0;
}
