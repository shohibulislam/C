#include<stdio.h>
#include<string.h>

void lowtoup(char a[]);

int main(){
    char a[100];
    scanf("%s",a);
    lowtoup(a);
}

void lowtoup(char a[]){
    int n = strlen(a);
    int i, count = 0;;
    for(i=0; i<=n; i++){
        if((a[i] == 'a') || (a[i] == 'e') || (a[i] == 'i') || (a[i] =='o') || (a[i] =='u')){
            a[i] = a[i] - 32;
        }
    }
    printf("%s",a);
}