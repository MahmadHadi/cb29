// guess the num -> take input from user until he enters the value of key

#include<stdio.h>
void main() {

    int key = 10, intput;
    /*
    printf("Enter a number: ");
    scanf("%d", &intput); // input = 1

    printf("Enter a number : ");
    scanf("%d", &intput); // input = 5

    printf("Enter a number : ");
    scanf("%d", &intput); // input = 10

    printf("You have entered key ");
    */

   do {
        printf("Enter a number : ");
        scanf("%d", &intput); 
   } while (intput != key);

   printf("You have entered the kye ");
}