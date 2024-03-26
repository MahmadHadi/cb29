// reverse of a number 
// 123 -> 321 
// 5933 -> 3395

/*

num = 123 
num = 1 ; 
            3 * 10 + 2 -> 32 * 10 -> 320 + 1 -> 321 

rnum = 0;

ld = num % 10;
rnum = rnum * 10 + ld ; => rnum = 3 
        0       +   3 
num /= 10; num = 12

ld = num % 10; -> ld = 2
rnum = rnum * 10 + ld; rnum = 32 
        3 * 10 + 2
num /= 10 -> num = 1;

ld = num % 10 -> ld = 1 
rnum = rnum * 10 + ld;  rnum = 321
        32 * 10 + 1 
num /= 10 -> num = 0

ld = num % 10 -> ld = 0
rnum = rnum * 10 + ld ; rnum = 3210
num /= 10 -> num = 0

--------------------------------------

num = 9732
rnum = 0

ld = num % 10 // ld = 2
rnum = rnum * 10 + ld // rnum = 2
num /= 10 // num = 973

ld = num % 10 // 3
rnum = rnum * 10 + ld // rnum = 23
num /= 10; // num = 97

ld = num % 10 // 7
rnum = rnum * 10 + ld // rnum = 237
num /= 10 // num = 9

ld = num % 10 // 9
rnum = rnum * 10 + ld // rnum = 2379
num /= 10 // num = 0

*/

#include<stdio.h>
void main() {

    int num, rnum = 0, ld; // ld = last digit 

    printf("Enter a number : ");
    scanf("%d", &num);
    
    while (num != 0) {
        ld = num % 10;
        rnum = rnum * 10 + ld ;
        num /= 10;
    }
    printf("reverse of num = %d ", rnum);
}