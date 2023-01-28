#include <stdio.h>
int main()
{
    int digit, n = 121, t, rev = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        rev = rev * 10 + digit;
    }
    if (rev == t)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("not a  palindrome");
    }
}