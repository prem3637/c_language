/*
n=7
  *         *
  *         *
  *         *
  ***********
       *
      **
     ***
    ****
   *****
  ******
 *******

n=5
 *       *
 *       *
 *       *
 *       *
 *********
     *
    **
   ***
  ****
 *****

n=3

*     *
*     *
*******
   *
  **
 ***

*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    if(n%2==0 || n==1)
    {
        printf("Please enter even Number :");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<n+4;j++)
        {
            if(i==n-1 || j==0 || j==n+3 )
            printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
    for(i=0;i<n;i++)
    {
            printf(" ");


        for(j=0;j<n;j++)
        {
            if(j<n-1-i)
            printf(" ");
            else
            printf("*");

        }
        printf("\n");
    }

}