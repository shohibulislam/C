#include<stdio.h>
int main(){
    int row, col;
    printf("enter rows and columns-\n");
    scanf("%d %d", &row, &col);

    int a[row][col];

    printf("enter array elements-\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    int max = a[0][0];
    printf("Maximum number-\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]>max){
                max = a[i][j];
            }
        }
    }
    printf("%d",max);
}