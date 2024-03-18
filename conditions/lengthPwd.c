//  length of pwd -> length <= 5 --< weak pwd
//                   -> length > 5  --< strong pwd

#include<stdio.h>
void main() {

    int pwd;
    printf("Enter poassword: ");
    scanf("%d", &pwd);

    if (pwd >= 10000) {
        printf("Strong password ");

    }
    else {
        printf("Weak password ");
    }

}