#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%4==0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
}