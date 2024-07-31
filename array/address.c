#include<stdio.h>
int main(){
    int arr[12];
    for(int i=1;i<=12;i++){
        printf("%p\n",&arr[i]);
    }
    return 0;
}