#include<stdio.h>
#include<math.h>

int isPowerOfTwo(int n);

int main(){
    int n;
    printf("Enter an intger number:");
    scanf("%d",&n);
    if(isPowerOfTwo(n)){
        printf("true");
    }
    else{
        printf("false");
    }
}

int isPowerOfTwo(int n){
    int i, count = 1;
    for(int i=0; pow(2 , i)<=n; i++){
        if(pow(2 , i) == n){
            count = 0;
            break;
        }
    }
    if(count == 0){
        return 1;
    }
    else{
        return 0;
    }
    
}