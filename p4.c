/*
n=5
* * * * * * *
  * * * * *
    * * *
      *
      @
      @
      @
      @
      @
      @
      @
    *****
    *****
    *****
    *****
    *****
n=3
* * * * *
  * * *
    *
    @
    @
    @
    @
    @
   ***
   ***
   ***
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter Numbers of rows :");
    scanf("%d",&n);
    if(n%2==0 || n==1)
    {
        printf("Enter a even number ");
        return 0;
    }
    for(i=0;i<n+3;i=i+2)
    {
        for(j=0;j<i;j++)
        {
           printf(" ");   
        }
        for(j=i;j<n+2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<n+2;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf(" ");
        }
        for(j=0;j<n/2+6;j++)
        {
            if(j==n/2+1)
            {
                printf("@");
            }
        }
           printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2+2;j++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}