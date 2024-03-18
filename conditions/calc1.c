/*
    + 
    - 
    * 
    / 

*/
#include<stdio.h>
void main() {

    int num1, num2;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    char operator;
    printf("Enter operator : ");
    fflush(stdin); // to empty buffer (scanf)
    scanf("%c", &operator);  

    // printf("this is_%c_hadi ", operator);

    // printf("Enter ");
    // scanf("%d %c %d", &num1, &operator, &num2);

    // int a = 1;
    // char ch = 'a';

    if (operator == '+') {
        printf("sum = %d", num1 + num2);
    }
    else {
        printf("Invalid input ");
    }
    
    if (operator == '-') {
        printf("sub = %d", num1 - num2);
    }

    if (operator == '*') {
        printf("prod = %d", num1 * num2);
    }

    if (operator == '/') {
        printf("division = %.2f", (float)num1 / num2);
        // 0.5 => 0 
        // 2.9 -> 2
    }
   


}

