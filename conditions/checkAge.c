// check age 
#include<stdio.h>
void main() {

    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age > 18) {
        printf("You can vote ");
    }

    if (age <= 18) {
        printf("You cannot vote ");
    }

}