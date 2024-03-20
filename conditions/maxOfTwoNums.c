#include<stdio.h>
void main() {

    int num1, num2;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    (num1 > num2) ? printf("%d ", num1) : printf("%d ", num2);

    printf("\n----------------------\n");

    int max = (num1 > num2) ? num1 : num2;
    // max = num2;
    printf("%d ", max);

    printf("\n----------------------\n");

    printf("%d ", (num1 > num2) ? num1 : num2);
}