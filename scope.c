#include<stdio.h>
#include<stdbool.h>

int a ; // global scope 

void main() {

    // int a = 1; // local scope
    if (false) {
        a = 1;
        printf("%d ", a );
    }
    printf("%d \n", a); 

    for (int i = 1; i <= 10; i++) {
        printf("asdf ");
    }   
    printf("\n");

    printf("%d ", i); 
}