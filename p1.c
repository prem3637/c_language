/*
n=3
      @@@@@
@     @@@@@
@@****@@@@@
@     @@@@@
      @@@@@

n=5
         @@@@@@@
@        @@@@@@@
@@       @@@@@@@
@@@******@@@@@@@
@@       @@@@@@@
@        @@@@@@@
         @@@@@@@
*/
#include<stdio.h>
#include<conio.h>
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
    for(i=0;i<n/2+2;i++)
    {
        for(j=0;j<n/2+1;j++)
        {
            if(j>=i)
            printf(" ");
            else
            printf("@");
        }
        for(j=1;j<n+2;j++)
        {
            if(i==n/2+1)
            printf("*");
            else
            printf(" ");
        }
        for(j=0;j<n+2;j++)
        {
            printf("@");
        }
        printf("\n");

    }
    //bellow
    for(i=n/2+1;i>0;i--)
    {
        for(j=0;j<n/2+1;j++)
        {
            if(j>=i-1)
            printf(" ");
            else
            printf("@");
        }
        for(j=1;j<n+2;j++)
        {
            
            printf(" ");
        }
        for(j=0;j<n+2;j++)
        {
            printf("@");
        }
        printf("\n");

    }

}