// 1, 8, 27, 64, 125, ...

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%d ", i * i * i);
    }
}
