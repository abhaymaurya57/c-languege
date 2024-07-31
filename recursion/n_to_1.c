#include<stdio.h>
void decrising(int n){
printf("%d\n",n);
if(n==1) return;
decrising(n-1);
return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d ",&n);
    decrising(n);
}