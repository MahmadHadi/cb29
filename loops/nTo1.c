// num > 1

#include<stdio.h>
void main() {

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n >= 1) {
        for (int i = n; i >= 1; i--) {
            printf("%d ", i);
        }
    }    
    else {
        printf("Enter number greater than 1 ");
    }
}