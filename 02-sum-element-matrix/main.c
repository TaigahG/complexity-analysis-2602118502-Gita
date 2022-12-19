#include <stdio.h>

int main()
{
    int m, n, sum=0;
    m = 3;
    n = 3;
    int i[m][n];
    for (int k = 0; k < m; k++){
        for (int j = 0; j < n; j++) {
            i[k][j] = 1;
            sum = sum+i[k][k];
        }
    }
    printf("%d", sum);
}