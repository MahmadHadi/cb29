// 4, 7, 10, 13, 16, ... 

#include<stdio.h>
void main() {

    int num;
    int count = 1;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        count += 3; // 4 // 7 / 10// 13
        printf("%d ", count);
    }
}