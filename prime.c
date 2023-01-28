#include <stdio.h>
int main()
{
    int i, n, flag = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        flag++;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("number is Prime");
    }
    else
    {
        printf("its not a Prime Number");
    }
}