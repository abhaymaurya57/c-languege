#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    int x = powerlog(a,b/2);
    if(b%2==0)
    return x*x;
    else
     return x*x*a; 
}

int main(){
    int a;
    printf("Enter a base: ");
    scanf("%d ",&a);
    int b;
    printf("Enter a power : ");
    scanf("%d ",&b);
    int pow=powerlog(a,b);
    printf("%d ",pow);
}