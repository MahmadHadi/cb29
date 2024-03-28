#include<stdio.h>
void main() {

    // *
    // * *
    // * * *
    // * * * * 
/*
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");
*/
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

}