//replace lowercase with uppercase & vice versa

#include<stdio.h>
#include<string.h>

void replace(char a[]);

int main(){
    char a[100];
    scanf("%s",a);
    replace(a);
}

void replace(char a[]){
    int n = strlen(a);
    int i, count = 0;;
    for(i=0; i<n; i++){
        if((a[i] >= 'A') && (a[i] <= 'Z')){
            a[i] = a[i] + 32;
        }
        else if((a[i] >= 'a') && (a[i] <= 'z')){
            a[i] = a[i] - 32;
        }
        
    }
    printf("%s",a);
}