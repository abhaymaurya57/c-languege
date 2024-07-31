#include<stdio.h>
int factorial(int k){
int fact =1;
for(int i=1;i<=k;i++){
    fact = fact*i;
}
return fact;
}

int  combination(int n;int r);
int nr = factorial(n)/(factorial(r)*factorial(n-r));
return nr;
int main(){
    int n;
    printf("Enetr a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            int ncr = combination(i,j);
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}