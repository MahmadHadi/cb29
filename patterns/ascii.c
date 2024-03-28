#include<stdio.h>
#include<stdbool.h>

void main() {

    // a -> 97
    // b -> 98
    // c -> 99
    // d -> 100 

    // A -> 65
    // B -> 66
    // C -> 67
    // D -> 68 

    char ch = '\0'; // \0 => null
    printf("%d \n", ch);

    int num = 100;
    printf("%c \n", num);

    // -------------------------
    bool bl = true;
    printf("%d ", sizeof(bl));

    int i = 1;
    printf("%d ", sizeof(i));
    float f = 1.23;
    printf("%d ", sizeof(f));

    char ch2;
    printf("%d ", sizeof(ch2));
}