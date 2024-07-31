#include<stdio.h>
int main(){
    int n;
    printf("Enetr a row : ");
    scanf("%d ",&n);
    int m;
     printf("Enetr a colum : ");
    scanf("%d ",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("* ");
        }
    
    printf("\n");
    }
}