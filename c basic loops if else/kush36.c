#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // we are going to extra variavale
    int a = 4;
    for(int i = 1;i<=n;i++){     
         printf("%d ",a);
         a = a+3;
    }
}