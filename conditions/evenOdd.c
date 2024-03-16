// even odd

#include <stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // check 

    // 2 4 6 8 10 ... 
    if (num % 2 == 0) {
        printf("It is a even number ");
    }

    if (num % 2 != 0) {
        printf("It is a odd number ");
    }

    printf("%d ", num);
}