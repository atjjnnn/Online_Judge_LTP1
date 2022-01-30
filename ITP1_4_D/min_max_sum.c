/* TBD: This problem is not solved yet */

#include <stdio.h>

int main(void)
{
	int num;
	int min = 0;
	int max = 0;
	long long sum = 0;
	int temp[10002];
	
	
	scanf("%d", &num);
	
	for (int p=0; p<num; p++) {
		scanf("%d", &temp[p]);
		sum += temp[p];
	}
	
	max = temp[0];
	min = temp[0];
	
	for (int i=0; i<num; i++) {
		if (max < temp[i]) {
			max = temp[i];
		}
		if (min > temp[i]) {
			min = temp[i];
		}
	}
	
	printf("%d %d %d\n", min, max, sum);
	
	return 0;
}
