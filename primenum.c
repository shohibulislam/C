#include<stdio.h>
int main(){
    int n, i, count=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=2; i<n; i++){
        if(n%2==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Its a Prime Number.");
    }
    else{
        printf("Its not a Prime Number.");
    }
}