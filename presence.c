//check if a character is present in string

#include<stdio.h>

int check(char a[], char n);

int main(){
    char n, a[100];
    scanf("%s",a);
    scanf(" %c",&n);
    if(check(a , n)){
        printf("True\n");
    }
    else{
        printf("False");
    }
}

int check(char a[], char n){
    for(int i=0; a[i] != '\0'; i++){
        if(a[i] == n){
            return 1;
        }
    }
    return 0;
}
