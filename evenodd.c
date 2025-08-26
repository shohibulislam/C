#include<stdio.h>
int main(){
    int n, x, y, a, b, i, z;
    printf("Type\n1 for even number\n2 for odd number\n: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Where to start and end?\nType Start and End Number: ");
        scanf("%d %d", &x, &y);
        if(x%2==0){
            printf("Even number from %d to %d is:\n", x, y);
            for(i=x; i<=y; i+=2){
                printf("%d\n",i);
            }
        }
        else if(x%2!=0){
            x++;
            printf("Even number from %d to %d is:\n", x, y);
            for(i=x; i<=y; i+=2){
                printf("%d\n",i);
            }
        }
        else{
            printf("Invalid Input!");
        }
        break;
    
    case 2:
        printf("Where to start and end?\nType Start and End Number: ");
        scanf("%d %d", &a, &b);
        if(a%2!=0) {
            printf("Odd number from %d to %d is:\n", a, b);
            for(z=a; z<=b; z+=2){
                printf("%d\n",z);
            }
        }
        else if(a%2==0){
            a++;
            printf("Odd number from %d to %d is:\n", a, b);
            for(z=a; z<=b; z+=2){
                printf("%d\n",z);
            }
        }
        else{
            printf("Invalid Input!");
        }
        break;
    
    default:
        printf("Invalid Choice!");
        break;
    }
}




//  Title:
// Even or Odd Number Range Printer in C


// Description:
// A simple C program that lets users choose whether they want to print even or odd numbers between two integers. It uses switch-case, if-else, and some basic logic to validate input and handle ranges correctly.

//README
// # Even or Odd Number Range Printer in C

// This is a beginner-friendly C program that allows users to:

// - Select whether they want to print even or odd numbers.
// - Enter a starting and ending number.
// - Automatically adjusts for input validity (e.g., starts from the correct even/odd number).

// ## Features

// - Uses `switch-case` and `if-else` logic.
// - Validates whether input is even or odd before printing.
// - Increments by 2 to print only selected number types.
// - Handles invalid inputs and wrong choices with simple error messages.

// ## How to Use

// 1. Compile the program using any C compiler.
// 2. Run it.
// 3. Follow the prompt to choose between even or odd number printing.

// ## Example

// Type
// 1 for even number
// 2 for odd number
// : 1
// Where to start and end?
// Type Start and End Number: 4 10
// Even number from 4 to 10 is:
// 4
// 6
// 8
// 10


