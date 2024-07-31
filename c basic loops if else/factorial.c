#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i = 2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter number  n : ");
    scanf("%d",&n);
    int r;
    printf("Enter number r :  ");
    scanf("%d",&r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int fac=nfact/(rfact*nrfact);
    printf("%d",fac);
    return 0;
}