// 1, 2, 4, 8, 16, ...

#include<stdio.h>
void main() {
    int count = 1;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) { // 1 -> 2, 2 -> 4, 4 -> 8
        // printf("%d ", i * 2);
        printf("%d ", count);
        count *= 2; // 1, 2, 4, 8 ,... 
    }
}