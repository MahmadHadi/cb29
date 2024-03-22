// all even numbers between 1 to 10

#include<stdio.h>
void main() {

    // int count = 1;

    // // printf("%d ", count);
    // count++; // count = 2
    // printf("%d ", count);
    // count++; // count = 3
    // // printf("%d ", count); 
    // count++; // 4
    // printf("%d ", count);
    // count++; // 5
    // // printf("%d ", count);
    // count++;
    // printf("%d ", count);
    // count++;
    // // printf("%d ", count);


    printf("Enter a number : ");
    int lt;
    scanf("%d", &lt);
    for (int i = 1; i <= lt; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        // count++;
    }

    
}