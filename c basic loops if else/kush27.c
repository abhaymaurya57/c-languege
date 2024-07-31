#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int b;
    printf("Enter a number : ");
    scanf("%d", &b);
    int c;
    printf("Enter a number : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is grestes number");
    }
    if (b > a && b > c)
    {
        printf("b is grestes number");
    }
    if (c > a && c > b)
    {
        printf("c is grestes number");
    }
}