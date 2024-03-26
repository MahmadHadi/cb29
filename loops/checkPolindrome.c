// check if number is a polindrome number or not 
// 112211, 1001

#include<stdio.h>
void main() {

    int num, rnum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    int temp = num;

    while (num != 0) {
        rnum = rnum * 10 + num % 10;
        num /= 10;
    }
    printf("%d %d %d \n", num, rnum, temp);

    if (rnum == temp) {
        printf("It is a polindrome number. ");
    } else {
        printf("It is a normal number ");
    }
}