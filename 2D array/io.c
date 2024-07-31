#include<stdio.h>
int main(){
    int r;
    printf("Enter a rows : ");
    scanf("%d ",&r);
    int c;
    printf("Enter a colum : ");
    scanf("%d ",&c);
    int arr[r][c];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}