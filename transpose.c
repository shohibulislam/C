#include<stdio.h>
int main(){
    int row, col;
    printf("Enter arrays number of rows and and columns-\n");
    scanf("%d %d", &row, &col);

    int a[row][col];
    printf("Enter array elements-\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    int b[col][row];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose matrix-\n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}