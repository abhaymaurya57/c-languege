#include<stdio.h>
int main(){
   int n;
   printf("Enter a number : ");
   scanf("%d", &n);
    if(n>99 && n<1000){
        printf("it is three digit number");
    
    }
    else{
        printf("it is not three digit number");
    }
}