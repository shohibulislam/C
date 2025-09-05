#include<stdio.h>

int sq(int x);

int main(){
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    printf("%d",sq(n));
    return 0;
}

int sq(int x){
    if(x==1 || x==0){
        return x;
    }
    int half=x/2, i;
    for( i=1; i<=half; i++){
        long long int one = (long long)i*i;
        if(one==x){
            return i;
        }
        else if(one>x){
            return i-1;
        }
    }
    return x/2;
}
