// write a function that return kb , mb , gb from given bytes
// 1 kb =1024 bytes
// 1 mb =1024*1024 bytes


#include <stdio.h>

int getkb(int bytes)
{
      int kb = bytes/1024;
      return kb;
}

int getmb( int bytes)
{
      return bytes/(1024*1024);
}

int getgb( int bytes)
{
      return bytes/(1024*1024*1024);
}

void main()
{
      int bytes;
      printf("enter bytes : ");
      scanf("%d",&bytes);

      printf("\nbytes : %d",bytes);
      printf("\nkb : %d",getkb(bytes));
      printf("\nmb : %d",getmb(bytes));
      printf("\ngb : %d",getgb(bytes));
}