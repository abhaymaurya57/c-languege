#include<stdio.h>
int decreasing(int n){
    if(n==0) return ;
    return n*decresing(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d ",&n);
    decriasing(n);
    return 0;
}   