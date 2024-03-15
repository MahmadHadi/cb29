// change unit of temperature -> celcius to farenheit
// (tempC × 9/5) + 32 = tempF

#include<stdio.h>
void main() {
    
    float tempC;
    printf("Enter temperature celcius : ");
    scanf("%f", &tempC);
    
    float tempF = (tempC * 9 / 5) + 32;
    
    printf("temperature if farenheit = %.2f", tempF);
}

