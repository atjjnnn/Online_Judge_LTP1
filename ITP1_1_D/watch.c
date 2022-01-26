#include <stdio.h>

int main(void)
{
    int hour = 0;
    int minute = 0;
    int second = 0;
    int input = 0;
    
    scanf("%d", &input);
    
    if (input >= 3600) {
        hour =  input / 3600;
        input = input % (3600 * hour);
    }
    if (input >= 60) {
        minute = input / 60;
        second = input % (60 * minute);
    } else {
        second = input;
    }
    
    printf("%d:%d:%d\n", hour, minute, second);
    
    return 0;
}
