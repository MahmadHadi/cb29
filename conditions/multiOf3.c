// multiple of three 

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);


    // check 
    // 3 6 9 12 15 ... 
    
    if (num % 3  == 0) {
        printf("Number is multiple of three \n");   
    }

    if (num % 3 != 0) {
        printf("Number is not multiple of three \n");
    }

    printf("%d ", num % 3);
        
}