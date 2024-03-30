#include<stdio.h>

int add(int num1, int num2) {

    int sum = num1 + num2; // 2 // 3 // 4 // 5 // 6
    printf("sum = %d \n", sum); // 2 // 3 // 4 // 5 // 6

    // recursion 
    // if (num2 <= 4) {
    //     add(1, num2 + 1); // n2 = 2 // n2 = 3 // n2 = 4 // n2 = 5
    // }

    return sum;

    printf("hello this is addfun ");

}

void callAdd() {
    printf("call add = %d ", add(1, 2));

    return;

    printf("asdf ");
}

int main() {

    // int sum = add(1, 2);
    // printf("sum1 = %d \n", sum);

    // printf("sum2 = %d ", add(10, 2));

    // int sum3 = 1 + 2;

    // // float div = 1 / 0;

    // callAdd();

    add(1, 1);
    return 0;

    printf("hello this is main ");
}