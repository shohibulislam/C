#include<stdio.h>
int main(){
    int a[5];
    printf("Enter array.\n");
    for(int i=0; i<5; i++){
        printf("Index number %d of array:",i);
        scanf("%d",&a[i]);
    }
    printf("Entered array \n");
    for(int i=0; i<5; i++){
        printf("%d ",a[i]);
    }
    int i, n, f=0;
    printf("\nEnter a number to search:\n");
    scanf("%d",&n);
    for( i=0; i<5; i++){
        if(n==a[i]){
            f++;
            printf("Found at index %d",i);
            break;
        }
    }
    if(f==0){
        printf("Number not found!");
    }
    
}