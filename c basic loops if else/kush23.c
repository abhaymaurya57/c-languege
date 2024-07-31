#include<stdio.h>
int main(){
    int L;
    printf("Enter a number : ");
    scanf("%d",&L);
    int B;
    printf("Enter a number : ");
    scanf("%d",&B);
    int A = L*B;
    int P = 2*(L + B);
    if(A>P){
        printf("area is greter than perimeter");
    }
    if(A<P){
        printf("perimeter is greter than area");
    }
    if(A==P){
        printf("both are equal");
    }
}