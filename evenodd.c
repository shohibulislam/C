#include<stdio.h>
int main(){
    int n, x, y, a, b, i, z;
    printf("Type\n1 for even number\n2 for odd number\n: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Where to start and end?\nType Start and End Number: ");
        scanf("%d %d", &x, &y);
        if(x%2==0){
            printf("Even number from %d to %d is:\n", x, y);
            for(i=x; i<=y; i+=2){
                printf("%d\n",i);
            }
        }
        else if(x%2!=0){
            x++;
            printf("Even number from %d to %d is:\n", x, y);
            for(i=x; i<=y; i+=2){
                printf("%d\n",i);
            }
        }
        else{
            printf("Invalid Input!");
        }
        break;
    
    case 2:
        printf("Where to start and end?\nType Start and End Number: ");
        scanf("%d %d", &a, &b);
        if(a%2!=0) {
            printf("Odd number from %d to %d is:\n", a, b);
            for(z=a; z<=b; z+=2){
                printf("%d\n",z);
            }
        }
        else if(a%2==0){
            a++;
            printf("Odd number from %d to %d is:\n", a, b);
            for(z=a; z<=b; z+=2){
                printf("%d\n",z);
            }
        }
        else{
            printf("Invalid Input!");
        }
        break;
    
    default:
        printf("Invalid Choice!");
        break;
    }
}
