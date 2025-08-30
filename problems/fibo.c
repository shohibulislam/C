/*
problem-
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

Given n, calculate F(n).


*/

#include<stdio.h>

int fib(int n);

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("%dth Fibonacci number is: %d", n, fib(n));
}

int fib(int a){
    if(a == 0){
        return 0;
    }
    if(a == 1){
        return 1;
    }
    int f = fib(a-2), s = fib(a-1);
    int n = f+s;
    return n;
}