#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d ",&n);
    for(int i=0;i<=2*n;i++){
    printf("* ");
    }
    printf("\n"); 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
        printf("* ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(i<(n/2)+1)
        printf("  ");
        }
        for(int j=1;j<=i-(n/2);j++){
            if(i>(n/2))
            printf("  ");
        }
        for(int k=0;k<=2*n-2*k;k++){
            if(i>n/2)
        printf("* ");
        }
        for(int j=1;j<=i-(n/2);j++){
            if(i>(n/2))
            printf("  ");
        }
        for(int j=1;j<=n-i+1;j++){
            printf("* ");
        }
        printf("\n"); 
    } 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        printf("* ");
        }
        for(int j=1;j<=n/2-i+2;j++){
            if(i-1<=n/2)
            printf("  ");
            }
        for(int j=1;j<=n-2;j++){
            if(i-2<n/2)
        printf("* ");
        }
        for(int j=1;j<=n/2-i+2;j++){
            if(i-1<=n/2)
            printf("  ");
            }
        for(int j=1;j<=2*n-2*i+1;j++){
            if(i-1>n/2)
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
    
        printf("\n");
    }
    for(int i=0;i<=2*n;i++){
    printf("* ");
    }
    return 0;
}

