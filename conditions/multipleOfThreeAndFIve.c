// multiple of 3 and 5

#include<stdio.h>
void main() {

    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    // check

    if (num % 3 == 0 && num % 5 == 0) {
        printf("multiple of three and five both ");
    }
    else if (num % 3 == 0) {
        printf("Number is only multiple of three ");
    }
    else if (num % 5 == 0) {
        printf("Number is only multiple of five ");
    }
    else {
        printf("Number if neither multiple of three nor five ");
    }
}
