#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j%2==0) {
                printf("*");
            }
            else
             printf("_");
        
        }
        printf("\n");
    }
    return 0;

}