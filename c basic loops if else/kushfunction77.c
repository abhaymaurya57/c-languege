#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    int y;
    printf("Enter a number : ");
    scanf("%d",&y);
    int sum = add(x,y);
    printf("%d",sum);
    return 0;
}

