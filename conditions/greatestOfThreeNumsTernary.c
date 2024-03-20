// 1 2 3 -> 3

#include <stdio.h>
void main()
{

    int n1, n2, n3;

    printf("Enter n1, n2, n3 : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // if (n1 > n2) {
    //     if (n1 > n3) {
    //         printf("%d ", n1);
    //     }
    //     else {
    //         printf("%d ", n3);
    //     }
    // }
    // else {
    //     if (n2 > n3) {
    //         printf("%d ", n2);
    //     }
    //     else {
    //         printf("%d ", n3);
    //     }
    // }

    // (n1 > n2) ? ((n1 > n2) ? printf("%d ", n1) : printf("%d ", n3)) : ((n2 > n3) ? (n2 > n3) ? printf("%d ", n2) : printf("%d ", n3));

    (n1 > n2) ? ((n1 > n3) ? printf("%d ", n1) : printf("%d ", n3)) : ((n2 > n3) ? printf("%d ", n2) : printf("%d ", n3));
}