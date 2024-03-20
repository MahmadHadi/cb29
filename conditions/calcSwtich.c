#include<stdio.h>
void main() {

    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    char operator;
    printf("Enter operator : ");
    fflush(stdin);
    scanf("%c", &operator);

    switch (operator) {

        case '+' :
            printf("sum = %d", num1 + num2);
            break;

        case '-' :
            printf("Sub = %d ", num1 - num2);
            break;

        case '*' : 
            printf("prod = %d ", num1 * num2);
            break;

        case '/' :
            printf("div = %.2f ", (float)num1 / num2);
            break;
            
        default : 
            printf("Invalid input ");
    }
}