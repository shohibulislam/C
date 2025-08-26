#include<stdio.h>
#include<math.h>
int main(){
    int n, x, a, b, c;
    printf("Enter your three digit number:");
    scanf("%d",&n);
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    x=pow(a,3)+pow(b,3)+pow(c,3);
    if(n==x){
        printf("%d is a Armstrong number.",n);
    }
    else{
        printf("Its not:(");
    }
}