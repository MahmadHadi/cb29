#include<stdio.h>
void main() {

    // * * * * * 
    // * * * * * 
    // * * * * * 

    // printf("* * * * * \n");
    // printf("* * * * * \n");
    // printf("* * * * * \n");

    for (int i = 1; i <= 10; i++) {
        printf("* * * * * \n");
    }
    printf("\n---------------------\n");
/*
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");
*/

    int height = 5;
    // printf("Enter height : ");
    // scanf("%d", &height);
    
    if (height > 0) {
        
        for (int i = 1; i <= height; i++) { // row 
            for (int j = 1; j <= height; j++) { // col // elements
                printf("* ");
            }
            // code 
            printf("\n");
        }

    } else {
        printf("Invalid input ");
    }

    printf("\n====================\n");

    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    
    printf("\n====================\n");

    // 1 2 3 
    // 4 5 6 
    // 7 8 9 

    // 1, 2 , 3 ... , n

    /*
    printf("%d ", sum);
    sum++;
    printf("%d ", sum);
    sum++;
    printf("%d ", sum);
    printf("\n");
    sum++;
    printf("%d ", sum);
    sum++;
    printf("%d ", sum);
    sum++;
    printf("%d ", sum);
    */

    int sum = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%.2d ", sum);
            sum++;
        }
        printf("\n");
    }

    // printf("%.4d ", 125); // 0125
}