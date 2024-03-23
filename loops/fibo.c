// fibonacci    2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 ...  upto n terms
#include<stdio.h>
void main() {

    int first = 2, second = 1;

    int ans;
    ans = first + second;
    printf("%d ", first);
    printf("%d ", second);
    
/*
    printf("%d ", ans);
    first = second; // f = 1
    second = ans; // s = 3

    ans = first + second; // a = 4 
    printf("%d ", ans);

    first = second; // f = 3 
    second = ans; // s = 4
    ans = first + second; // a = 7
    printf("%d ", ans);

    first = second; // f = 4
    second = ans; // 7 
    ans = first + second; // 11
    printf("%d ", ans);
*/

    for (int i = 1; i <= 10; i++) {

        printf("%d ", ans);
        first = second; // f = 1
        second = ans; // s = 3
        ans = first + second; // a = 4 
    }
}
