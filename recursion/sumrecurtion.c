#include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    int SUM = n+sum(n-1);
    return SUM;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d ",&n);
    int a = sum(n);
    printf("%d",a);
    return 0;
}