#include<stdio.h>
int main() {
    int r;
    printf("Enter a radius : ");
    scanf("%d" ,&r);
    int A;
    int P;
    // A is area of circal
    // P perimeter of circal
    A = 3.147*r*r;
    printf("circal area is :%d",A);
    printf("\n");
    P = 2*3.147*r;
    printf("perimeter of circal is : %d ",P);
    return 0;
}

