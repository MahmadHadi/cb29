// write a function that calculate addition , substraction , multiplication , division

#include <stdio.h>

int add(int num1, int num2)
{
      return num1 + num2;
}

int sub(int num1, int num2)
{
      return num1 - num2;
}

int mul(int num1, int num2)
{
      return num1 * num2;
}

int div(int num1, int num2)
{
      return num1 / num2;
}

void main()
{
      int check = 1;
      while(check==1)
      {
            int a;
            int b;
            int choise;

            printf("\n----------- options -----------");
            printf("\nenter 1 for addition");
            printf("\nenter 2 for substraction");
            printf("\nenter 3 for multiplication");
            printf("\nenter 4 for division");
            printf("\nenter 0 for exit");
            printf("\n-------------------------------\n");

            printf("enter your choise : ");
            scanf("%d", &choise);

            if (choise > 4 || choise<0)
            {
                  printf("invalid input ! try again....");
            }

            else if(choise==0){
                  check=0;
                  printf("good bye...");
            }

            else
            {
                  printf("eneter number 1 : ");
                  scanf("%d", &a);
                  printf("eneter number 2 : ");
                  scanf("%d", &b);

                  switch (choise)
                  {
                  case 1:
                        printf("addition : %d", add(a, b));
                        break;

                  case 2:
                        printf("substraction : %d", sub(a, b));
                        break;

                  case 3:
                        printf("multiplication : %d", mul(a, b));
                        break;

                  case 4:
                        printf("division : %d", div(a, b));
                        break;

                  }
            }
      }
}