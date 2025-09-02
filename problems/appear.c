#include<stdio.h>

int appe(int a[], int n);

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    appe(a , n);
}

int appe(int a[], int n){
    int x, count = 0;
    printf("Enter number to count: ");
    scanf("%d",&x);

    for(int i=0; i<n; i++){
        if(a[i] == x){
            count++;
        }
    }
    if(count > 1){
        printf("The number %d shows up exactly %d times in the array.", x, count);
    }
    else{
        printf("The number %d shows up exactly %d time in the array.", x, count);
    }
}