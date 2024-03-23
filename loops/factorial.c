// 5! = 5 * 4 * 3 * 2 * 1 = 1 * 2 * 3 * 4 * 5
// 3! = 3 * 2 * 1 

// n! = n * (n - 1) * (n - 2) * (n - 3) * ... * 1 

// -3! = (-3) * (-3 -1) * (-3 -2) ... 

#include<stdio.h>
void  main() {

    int fact = 1, num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num >= 0) {
        for (int i = 1; i <= num; i++) {
            // printf("fact = %d \n", fact);
            fact = fact * i; // 120 
        }
        printf("%d ! = %d ", num, fact);
    }
    else {
        printf("Invalid input ");
    } 
}
