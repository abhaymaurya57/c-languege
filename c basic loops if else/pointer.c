#include<stdio.h>
int main(){
    int x=5;
    int* n=&x;
    printf("%p\n",n);
    printf("%p\n",&n);
}