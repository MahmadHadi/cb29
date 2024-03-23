#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    int length = 0;
    while (num != 0) {
        length++;
        // num = num / 10;
        num /= 10;
        // printf("\n num = %d ", num);
    }    
    printf("\n length = %d ", length);
}   


// num = 123 -> 3
// length = 0

// length++ // 1
// num = num / 10 // num = 12

// length++ // 2
// num = num / 10 // num = 1

// length++ // 3
// num = num / 10 // num = 0

// --------------------------------------
// num = 4235

// length = 0;

// length ++ // 1 
// num /= 10 // num = 423

// length++ // 2 
// num /= 10 // num = 42

// length++ // 3
// num /= 10 // num 4

// length++ // 4
// num /= 10 // 0

// print(length) 