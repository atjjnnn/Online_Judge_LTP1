#include <stdio.h>

int main(void)
{
	int card[4][13] = {0};
	int num, number;
	char pattern;
	
	scanf("%d", &num);
	
	for (int i=0; i<num; i++) {
	//	fflush(stdin);
		scanf("%c", &pattern);
		scanf("%c %d", &pattern, &number);
		
		if (pattern == 'S') card[0][number-1] = 1;
		if (pattern == 'H') card[1][number-1] = 1;
		if (pattern == 'C') card[2][number-1] = 1;
		if (pattern == 'D') card[3][number-1] = 1;
	}
	
	for (int y=0; y<4; y++) {
		for (int x=0; x<13; x++) {
			if (card[y][x] == 0) {
				if (y == 0) printf("S %d", x+1);
				if (y == 1) printf("H %d", x+1);
				if (y == 2) printf("C %d", x+1);
				if (y == 3) printf("D %d", x+1);
				printf("\n");
			}
		}
	}
	return 0;
}
