#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("*");
        }
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=n-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int k=1;k<=n-1;k++){
        for(int j=1;j<=k+1;j++){
            printf("*");
        }
         for(int j=1;j<=n-k-1;j++){
            printf("  ");
        }
        for(int j=1;j<=k+1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}