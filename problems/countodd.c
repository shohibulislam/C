#include<stdio.h>

int countodd(int a[], int n);

int main(){
    int n=7;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Entered array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\nNumber of add number: %d",countodd(a , n));
}

int countodd(int a[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]%2 != 0){
            count++;
        }
    }
    return count;
}