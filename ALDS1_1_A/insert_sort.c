#include <stdio.h>

#define MAX_NUM 256

int main()
{
	int num;
	int input[MAX_NUM];
	scanf("%d", &num);
	
	for (int i=0; i<num; i++) {
		scanf("%d", &input[i]);
	} 

	for (int i=0; i<num; i++) {
		printf("input=%d\n", input[i]);
	}

}
