/*
n=5
   @
  @@       @@@@@
 @@@       @@@@@
@@@@*******@@@@@
 @@@       @@@@@
  @@       @@@@@
   @
n=3
  @
 @@       @@@
@@@*******@@@
 @@       @@@
  @


*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    if(n%2==0 || n==1)
    {
        printf("please Enter odd number");
        return 0;
    }
    for(i=0;i<=n/2+1;i++)
    {
        for(j=i;j<n/2+1;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("@");
        }
        for(j=0;j<n+2;j++)
        {
            if(i==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=0;j<n;j++)
        {
            if(i==0)
            printf(" ");
            else
            printf("@");
        }
        printf("\n");
    }
    //bellow

     for(i=n/2+1;i>=0;i--)
    {
        for(j=i;j<=n/2+1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("@");
        }
        for(j=0;j<n+2;j++)
        {
            if(i==n/2+2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=0;j<n;j++)
        {
            if(i==1||i==0)
            printf(" ");
            else
            printf("@");
        }
        printf("\n");
    }

}