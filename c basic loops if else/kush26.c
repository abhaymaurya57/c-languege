#include<stdio.h>
int main(){
   int n;
   printf("Enter a number : ");
   scanf("%d", &n);
    if(n%5==0 || n%3==0){
               printf("thr number divisible by 3 and 5");
    
    }
    else{
        printf("the number not divisible by 3 and 5");
    }
}