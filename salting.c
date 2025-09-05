//manual method of salting

#include<stdio.h>
#include<string.h>

void salt(char a[]);

int main(){
    char a[100];
    printf("Enter Password: ");
    scanf("%s",a);
    salt(a);
}

void salt(char a[]){
    int n = strlen(a);
    char x[] ="123";
    for(int i=0; x[i] != '\0'; i++){
        a[n+i] = x[i];
    }

    a[n + strlen(x)] = '\0';

    printf("Salted Form: ");
    puts(a);
}

//library method

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char a[100];
//     printf("Enter Password: ");
//     scanf("%s",a);
//     char x[] = "123";
//     strcat(a , x);
//     printf("Salting Form: ");
//     puts(a);

// }
