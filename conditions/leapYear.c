// leap year
#include<stdio.h>
void main() {

    int year;   
    printf("Enter year : ");
    scanf("%d", &year);

    // check 
    // 2020 2024 2028 2032 2036 2040 ... 3040 ... 

    if (year < 0) {
        printf("Invalid input \n");
    }
    
    if (year % 4 == 0) {
        printf("It is a leap year ");
    }

    if (year % 4 != 0) {
        printf("It is not a leap year ");
    }

}