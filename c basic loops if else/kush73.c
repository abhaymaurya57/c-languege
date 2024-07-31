#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int a = 1;
        for(int j =1;j<=i;j++){
        printf("%d",a);
        a++;
        }
        int k = i-1;
        for(int j=1;j<=i-1;j++){
            printf("%d",k);
            k--;
        }
        printf("\n");
    }
    
}