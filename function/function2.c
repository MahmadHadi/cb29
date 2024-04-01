// write a function that take a symbol from user print that symbol 
// take number from user and print symbol for times of number

#include <stdio.h>

void printsymbol(char sy,int num)
{
    for(int i=0;i<num;i++)
    {
        printf("%c\t",sy);
    }
}

void main()
{
    char symbol;
    int num;

    printf("\nenter a symbol : ");
    scanf("%c",&symbol);

    printf("\nenter number : ");
    scanf("%d",&num);

    printsymbol(symbol,num);
}