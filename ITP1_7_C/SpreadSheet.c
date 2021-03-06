#include <stdio.h>

int main(void)
{
    int array[10][10];
    int r = 0; //行数
    int c = 0; //列数
    int i, j;
    int row_sum = 0;
    int colum_sum = 0; 
    int total = 0;

    scanf("%d %d", &r, &c);

    /* 1行ずつrの行数分データ取得 */
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    /* 1行ずつrの行数分のデータを行の合計を出力 */
    for (i = 0; i < r; i++) {
        row_sum = 0;
        for (j = 0; j < c; j++) {
            printf("%d ", array[i][j]);
            row_sum += array[i][j];
        }
        printf("%d\n", row_sum);
        total += row_sum;
    }

    /* 1列ずつcの列分のデータ合計を出力 */
    for (i = 0; i < r+1; i++) {
        colum_sum = 0;
        for (j = 0; j < c; j++) {
            colum_sum += array[j][i];
        }
        /* 1列の合計を出力 */
        printf("%d ", colum_sum);
    }
    
    /* 合計値を出力 */
    printf("%d\n", total);

    return 0;
}

