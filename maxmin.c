//a program to find max and min in array
#include<stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array.\n");
    for(int i=0; i<n; i++){
        printf("Index number %d of array:",i);
        scanf("%d",&a[i]);
    }

    printf("Entered array \n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    
    int max=a[0];
    for(int i=1; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("\nMaximum number is %d\n",max);

    int min=a[0];
    for(int i=1; i<n; i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("Minimum number is %d",min);

}
