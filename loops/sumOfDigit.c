// 123 -> 1 + 2 + 3 = 6 

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int sum = 0;

    // int ld;
    while (num != 0) {
        // ld = num % 10;
        // sum = sum + ld;
        
        // printf("sum = %d \n", sum);

        // printf("ld = %d \n", num % 10);
        sum += num % 10; // to access last digit 

        // printf("num = %d \n", num);
        num /= 10; // to remove last digit  
    }
    printf("final sum = %d ", sum);   
}

// num = 123 -> 1 + 2 + 3 = 3 + 2 + 1 

// sum = 0, ld = 0 

// ld = num % 10  // ld = 3
// sum = sum + ld; // sum = 3
// num = num / 10 // num = 12

// ld = num % 10 // ld = 2 
// sum = sum + ld // sum = 5 
// num = num / 10 // num = 1 

// ld = num % 10 // ld = 1
// sum = sum + ld // sum = 6
// num = num / 10 // num = 0

// print (sum);

// ----------------------------------------
// num = 6345

// sum = 0, ld = 0

// ld = num % 10 // ld = 5 
// sum = sum + ld // sum = 5 
// num /= 10 // 634

// ld = num % 10 // ld = 4 
// sum = sum + ld // 9
// num /= 10 // num = 63 

// ld = num % 10 // ld = 3 
// sum = sum + ld // sum = 12 
// num /= 10 // num = 6 

// ld = num % 10 // ld = 6
// sum = sum + ld // sum = 18 
// num /= 10 // num = 0

// print (sum)