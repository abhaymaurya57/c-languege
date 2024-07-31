#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        int a=1;
        for(int j=1;j<=i;j++){
            int d = 64+a;
            char ch = (char)d;
        printf("%c",ch);
        a++;
        }
        printf("\n");
    }
    return 0;
}