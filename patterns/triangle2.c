#include<stdio.h>
void main() {

    // *
    // * *
    // * * *

    int height;
    printf("Enter height: ");
    scanf("%d", &height);

    int i, j;

    if (height > 0) {
        for (i = 1; i <= height; i++) {
            for (j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    } else {
        printf("Invalid input ");
    }

    printf("\n-------------\n");

    
    // * * *
    // * * 
    // * 
/*
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("\n");
*/

    for (i = 1; i <= height; i++) {
        for (j = height; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n-------------\n");

    
    //     *        // @ @ *    // *            
    //   * *        // @ * *    // * *    
    // * * *        // * * *    // * * *    

    for (i = 1; i <= height; i++) {
        for (j = height; j > i; j--) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n-------------\n");
    
        
    //    * 
    //   * *
    //  * * *
    // * * * *

    for (i = 1; i <= height; i++) {
        for (j = height; j > i; j--) {
            printf(" ");
            // printf("_");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n-------------\n");

        // * * *
        //   * *
        //     * 
    for (i = 1; i <= height; i++) {
        for (j = 1; j < i; j++) {
            printf("  ");
        }
        for (j = height; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n-------------\n");

        // * * * * *
        //  * * * *
        //   * * *
        //    * *
        //     *

    for (i = 1; i <= height; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = height; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n-------------\n");

        //    *
        //   * *
        //  * * *
        // * * * *
        //  * * *
        //   * * 
        //    *


    for (i = 1; i <= height; i++) {
        for (j = height; j > i; j--) {
            printf(" ");
            // printf("_");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 2; i <= height; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = height; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }


    printf("\n-------------\n");
    printf("\n-------------\n");
    // j
    // ^
    // |
    // * * * * -> i
    // *     *
    // *     *
    // * * * * 
    
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= height; j++) {
            if (i == 1 || i == height || j == 1 || j == height) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n-------------\n");
//          *
//          * *
//          *   *
//          *     *
//          * * * * *

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= i; j++) {
            if (i == 1 || i == height || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

}