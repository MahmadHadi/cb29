#include<stdio.h>
void main () {

    float height , weight ;

    printf("Enter your height : ");
    scanf("%f", &height);

    printf("Enter your weight : ");
    scanf("%f", &weight);

    float bmi = weight / (height * height);

    // check 
    if (height <= 0 || weight <= 0) {
        printf("Invalid input ");
    }
    else {

        printf("bmi = %.2f kg/m2 ", bmi);

        if (bmi > 0 && bmi <= 18.4) {
            printf("Underweight ");
        }
        else if (bmi >= 18.5 && bmi < 25) {
            printf("Normal ");
        }
        else if (bmi >= 25 && bmi < 40 ) {
            printf("Overweight ");
        }
        else if (bmi >= 40) {
            printf("Obes ");
        }
    }
}