#include<stdio.h>
int main(){
    int n;
    printf("Enter a n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",i);
    }
    printf("\n");
    
    for(int i=1;i<=n;i++){
        int a = n/2-1;
        for(int j=1;j<=n;j++){
        printf("%d",a);
        a++;
        }
        printf("\n");
    }

}