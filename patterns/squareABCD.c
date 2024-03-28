#include<stdio.h>
#include<stdbool.h>

void main() {

        // a a a
        // b b b
        // c c c 

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            printf("%c ", i + 96);
        }
        printf("\n");
    }

    printf("\n======================\n");
        // a b c 
        // d e f 
        // g h i 
    int sum = 1;    
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%c ", sum + 96);
            sum++;
        }
        printf("\n");
    }
    printf("%d ", sum);
    printf("\n======================\n");
    

        // a b c  
        // 4 5 6 
        // g h i

    sum = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i % 2 == 0) {
                printf("%d ", sum);
            } else {
                printf("%c ", sum + 96);
            }
            sum++;
        }
        printf("\n");
    }

    printf("\n======================\n");
    
    // 1 0 1 0
    // 1 0 1 0 
    // 1 0 1 0
    // 1 0 1 0
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j % 2 == 0){ 
                // printf("0 ");
                printf("%d ", !true); // ! => not operator 
            } else {
                // printf("1 ");
                printf("%d ", true);
            }
        }
        printf("\n");
    }
}