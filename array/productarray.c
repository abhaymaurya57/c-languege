#include<stdio.h>
int main(){
    int arr[8]={5,9,54,76,343,75,645,43};
    int sum=1;
    for(int i=0;i<=8;i++){
        sum=sum*arr[i];
         }
         printf("%d\n ",sum);
    return 0;
}