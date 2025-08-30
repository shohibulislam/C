#include<stdio.h>

int pali(int a);

int main(){
    int n;
    printf("number:");
    scanf("%d",&n);
    if(pali(n)){
        printf("true");
    }
    else{
        printf("false");
    }
}

int pali(int a){
    if(a<0){
        return 0;
    }
    int reminder, sum=0, temp;
    temp = a;
    while(temp != 0){
        reminder = temp%10;
        sum = (sum * 10) + reminder;
        temp = temp/10;
    }
    if(sum == a){
        return 1;
    }
    else{
        return 0;
    }
}