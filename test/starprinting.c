#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
            if( i%2==0){
                for(int j=1;j<=n-2;j++)
                printf(" *");
            }
            else{
                 for(int j=1;j<=n;j++){
                    printf("* ");
                }
            }
        printf("\n");
    }
    return 0;
}