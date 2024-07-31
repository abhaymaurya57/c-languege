#include<stdio.h>
int main(){
    int a;
    printf("Enter 1st side : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2st side : ");
    scanf("%d", &b);
    int c;
    printf("Enter 3st side : ");
    scanf("%d", &c);
    if(a+b>c && b+c>a && a+c>b){
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
}