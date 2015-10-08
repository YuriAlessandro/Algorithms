#include <stdio.h>

int main(){
    int m, n, i, j;
    scanf("%i %i", &m, &n);
    float matrix[m][n];
    
    for(i = 0; i < m; i++){
        for(j= 0; j < n; j++){
            scanf("%f", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < n; i++){
        for(j= 0; j < m; j++){
            printf("%.2f ", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
