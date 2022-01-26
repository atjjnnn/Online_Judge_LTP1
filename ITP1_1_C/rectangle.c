#include <stdio.h>

int main(void)
{
    int height = 0;  //縦の長さ
    int wide = 0;   //横の長さ 
    int area = 0;   //面積
    int length = 0; //周の長さ
    
    scanf("%d %d", &height, &wide);
    
    area = height * wide;
    
    length = height * 2 + wide * 2;
    
    printf("%d %d\n", area, length);
    
    return 0;
}
