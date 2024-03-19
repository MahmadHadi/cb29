// 90 - 100 -> a grade 
// 80 - 89 -> b grade 
// 70 - 79 -> c grade 
// 60 -  69 -> d grade 
// 50 - 59 -> f grade 
// 0 -  49 -> fail 
// else -> invalid input 

#include<stdio.h>
void main () {

    float marks;
    printf("Enter your marks : ");
    scanf("%f", &marks);

    // check 

    if (marks >= 90 && marks <= 100) 
        printf("a grade ");
        
    else if (marks >= 80 && marks <= 89) 
        printf("b grade ");
        
    else if (marks >= 70 && marks < 80) 
        printf("c grade ");
        
    else if (marks >= 60 && marks < 70) 
        printf("d grade ");
        
    else if (marks >= 50 && marks < 60) 
        printf("f grade ");
        
    else if (marks >= 0 && marks < 50) 
        printf("fail ");
        
    else 
        printf("Invalid input ");
        

}