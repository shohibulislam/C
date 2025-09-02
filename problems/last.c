#include<stdio.h>

int last(int );

int main(){
    int n, x;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n + 1];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Entered array-\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    printf("\nEnter number to insert at the end of the array: ");
    scanf("%d",&x);

    a[n] = x;

    printf("After inserting:\n");
    for(int i=0; i<n+1; i++){
        printf("%d ",a[i]);
    }
}