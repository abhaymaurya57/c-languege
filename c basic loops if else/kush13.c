#include<stdio.h>
int main()
{
    float radius;
    printf("enter radius : ");
    scanf("%f",&radius);
    float pi = 3.1415;
    float area = pi * radius * radius;
    printf("the area of circal : %f",area);
    return 0;
}