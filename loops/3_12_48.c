// 3, 12, 48, ... 

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int count = 3;

    for (int i = 1; i <= num; i++) {
        printf("%d ", count);
        count *= 4; // 12, 48, 192,   
    }
}