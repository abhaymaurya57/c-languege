#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d ",&n);
    int r =0;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }

scanf("%d %d ",n ,r);
printf("sum of n and f : ");

}
// pending