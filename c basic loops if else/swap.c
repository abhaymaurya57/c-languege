#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d ",&a);
    int  b;
    printf("Enter a number : ");
    scanf("%d ",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
    return 0;
}