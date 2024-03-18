// positive negative

#include<stdio.h>
void main() {

    float num;
    printf("Enter a number : ");
    scanf("%f", &num);

    if (num < 0) printf("Negative number ");
    else printf("Positive number ");
}