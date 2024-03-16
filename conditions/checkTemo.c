// check temperature
#include<stdio.h>
void main() {

    float temp;
    printf("Enter temperature ");
    scanf("%f", &temp);

    // check 
    if (temp < 20) {
        printf("Today is a cold day ");
    }

    if (temp >= 20) {
        printf("Today is a hot day ");
    }

}