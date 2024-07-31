#include<stdio.h>
int fibo(int x){
    if(x==1 || x==2) return 1;
int ans1=fibo(x-1);
int ans2=fibo(x-2);
int ans = ans1+ans2;
return ans;
}
int main(){
    int n;
    printf("Enter base : ");
    scanf("%d ",&n);
    printf("%d ",fibo(n));
    return 0;
} 