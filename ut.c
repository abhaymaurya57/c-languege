#include<stdio.h>
int main(){
int n;
printf("Enter a number :");
scanf("%d",&n);
// for (int i=1;i<=n;i++){
    if(n>=0){
        for(int j=n;j>=0;j--){
        printf("%d",n);
    }
    printf("\n");
    }
// }
return 0;
}