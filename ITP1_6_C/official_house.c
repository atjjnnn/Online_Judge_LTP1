#include <stdio.h>

#define WING_NUM	4
#define FLOOR_NUM	3
#define ROOM_NUM	10

int main(void)
{
	int house[WING_NUM][FLOOR_NUM][ROOM_NUM] = {0};
	
	int b, f, r, v, i, j, m, num;
	
	scanf("%d", &num);
	
	for (int i=0; i<num; i++) {
		scanf("%d %d %d %d", &b, &f, &r, &v);
		
		house[b-1][f-1][r-1] += v;
	}
	
	for (i=0; i<WING_NUM; i++) {
		for (j=0; j<FLOOR_NUM; j++) {
			for (m=0; m<ROOM_NUM; m++) {
				printf(" %d", house[i][j][m]);
			}
			printf("\n");
		}
		if (!(i == (WING_NUM-1))) {
			printf("####################\n");
		}
	}
	return 0;
}
