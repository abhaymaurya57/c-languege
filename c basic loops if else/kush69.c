#include<stdio.h>
 int main(){
    int n;
    printf("Enter a number of row : ");
    scanf("%d ",&n);
    int m;
    printf("Enter a number of colum : ");
    scanf("%d ",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || j==1)
                printf("*");
                else
                printf("#");
            
        }
        printf("\n");
    }
 }